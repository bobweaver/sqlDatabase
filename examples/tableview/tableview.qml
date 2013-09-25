//![0]
import QtQuick 2.0
import SqlDatabase 1.0
import QtQuick.Window 2.0
import QtQuick.Controls 1.0

//***
//  This Plugin is under heavy development
//***

Rectangle{
    width: Screen.width
    height: Screen.height  - 10

    TableView{
        id:list
        width: Screen.width
        height: Screen.height - 10
        model:   sqlModelFinal

        TableViewColumn{ role: "inputgroupid"  ; title: "Input Group" ; width: 100 }

        TableViewColumn{ role: "cardinputid" ; title: "Card Input ID" ; width: 200 }

        TableViewColumn{role: "inputgroupname" ;title: "Input Group Name" ; width: list.width - 300 }

        Component.onCompleted: {

            // use the c++ function to connect to the database
            // in the future this will be in the propertys of qml
            connect.createConnection();

            // use the C++ function to query the selected database
            // in the future this will be in the propertys of qml
            sqlModelFinal.setQuery("
                                    SELECT *
                                    FROM  `inputgroup`
                                    ORDER BY  `inputgroup`.`cardinputid` ASC
                                    LIMIT 0 , 30
                                    ")
        }
    }

    SqlConnection{
        // give a id so we can call its c++ functions
        id:connect
        // set the source of the database ex:
        source: "127.0.0.1"
        // set the database Name
        databaseName: ""
        // set the User of the connection
        user: ""
        // set the password for that User
        password: ""
        // set the port for the connection
        port: 3306
        // set the driver to use
        databaseType: "mysql"
    }

    SqlModel{
        // set the Model to the connected database
        // give Id to run the query
        id: sqlModelFinal
    }
}
//![0]
