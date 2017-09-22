---
title: "Oracle Sequences"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-ado"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 27cd371d-8252-414d-b5b2-5d31fa44b585
caps.latest.revision: 4
author: "JennieHubbard"
ms.author: "jhubbard"
manager: "jhubbard"
---
# Oracle Sequences
The .NET Framework Data Provider for Oracle provides support for retrieving the server-generated key Oracle Sequence values after performing inserts by using the <xref:System.Data.OracleClient.OracleDataAdapter>.  
  
 SQL Server and Oracle support the creation of automatically incrementing columns that can be designated as primary keys. These values are generated by the server as rows are added to a table. In SQL Server, you set the Identity property of a column; in Oracle you create a Sequence. The difference between auto-increment columns in SQL Server and sequences in Oracle is that:  
  
-   In SQL Server, you mark a column as an auto-increment column and SQL Server automatically generates new values for the column when you insert a new row.  
  
-   In Oracle, you create a sequence to generate new values for a column in your table, but there is no direct link between the sequence and the table or column. An Oracle sequence is an object, like a table or a stored procedure.  
  
 When you create a sequence in an Oracle database, you can define its initial value and the increment between its values. You can also query the sequence for new values before submitting new rows. That means your code can recognize the key values for new rows before you insert them into the database.  
  
 For more information about creating auto-increment columns by using SQL Server and ADO.NET, see [Retrieving Identity or Autonumber Values](../../../../docs/framework/data/adonet/retrieving-identity-or-autonumber-values.md) and [Creating AutoIncrement Columns](../../../../docs/framework/data/adonet/dataset-datatable-dataview/creating-autoincrement-columns.md).  
  
## Example  
 The following C# example demonstrates how you can retrieve new sequence values from Oracle database. The example references the sequence in the INSERT INTO query used to submit the new rows, and then returns the sequence value generated using the RETURNING clause introduced in Oracle10g. The example adds a series of pending new rows in a <xref:System.Data.DataTable> by using ADO.NET’s auto-increment functionality to generate "placeholder" primary key values. Note that the increment value ADO.NET generated for the new row is just a "placeholder". That means the database might generate different values from the ones ADO.NET generates.  
  
 Before submitting the pending inserts to the database, the example displays the contents of the rows. Then, the code creates a new <xref:System.Data.OracleClient.OracleDataAdapter> object and sets its <xref:System.Data.OracleClient.OracleDataAdapter.InsertCommand%2A> and the <xref:System.Data.OracleClient.OracleDataAdapter.UpdateBatchSize%2A> properties. The example also supplies the logic to return the server-generated values by using output parameters. Then, the example executes the update to submit the pending rows and displays the contents of the <xref:System.Data.DataTable>.  
  
```csharp  
public void OracleSequence(String connectionString)  
{  
   String insertString =   
      "INSERT INTO SequenceTest_Table (ID, OtherColumn)" +  
      "VALUES (SequenceTest_Sequence.NEXTVAL, :OtherColumn)" +  
      "RETURNING ID INTO :ID";  
  
   using (OracleConnection conn = new OracleConnection(connectionString))  
   {  
      //Open a connection.  
      conn.Open();  
      OracleCommand cmd = conn.CreateCommand();  
  
      // Prepare the database.  
      cmd.CommandText = "DROP SEQUENCE SequenceTest_Sequence";  
      try { cmd.ExecuteNonQuery(); } catch { }  
  
      cmd.CommandText = "DROP TABLE SequenceTest_Table";  
      try { cmd.ExecuteNonQuery(); } catch { }  
  
      cmd.CommandText = "CREATE TABLE SequenceTest_Table " +  
                     "(ID int PRIMARY KEY, OtherColumn varchar(255))";  
      cmd.ExecuteNonQuery();  
  
      cmd.CommandText = "CREATE SEQUENCE SequenceTest_Sequence " +  
                        "START WITH 100 INCREMENT BY 5";  
      cmd.ExecuteNonQuery();  
  
      DataTable testTable = new DataTable();  
      DataColumn column = testTable.Columns.Add("ID", typeof(int));  
      column.AutoIncrement = true;  
      column.AutoIncrementSeed = -1;  
      column.AutoIncrementStep = -1;  
      testTable.PrimaryKey = new DataColumn[] { column };  
      testTable.Columns.Add("OtherColumn", typeof(string));  
      for (int rowCounter = 1; rowCounter <= 15; rowCounter++)  
      {  
         testTable.Rows.Add(null, "Row #" + rowCounter.ToString());  
      }  
  
      Console.WriteLine("Before Update => ");  
      foreach (DataRow row in testTable.Rows)  
      {  
         Console.WriteLine("   {0} - {1}", row["ID"], row["OtherColumn"]);  
      }  
      Console.WriteLine();  
  
      cmd.CommandText =   
        "SELECT ID, OtherColumn FROM SequenceTest_Table";  
      OracleDataAdapter da = new OracleDataAdapter(cmd);  
      da.InsertCommand = new OracleCommand(insertString, conn);  
      da.InsertCommand.Parameters.Add(":ID", OracleType.Int32, 0, "ID");  
      da.InsertCommand.Parameters[0].Direction = ParameterDirection.Output;  
      da.InsertCommand.Parameters.Add(":OtherColumn", OracleType.VarChar, 255, "OtherColumn");  
      da.InsertCommand.UpdatedRowSource = UpdateRowSource.OutputParameters;  
      da.UpdateBatchSize = 10;  
  
      da.Update(testTable);  
  
      Console.WriteLine("After Update => ");  
      foreach (DataRow row in testTable.Rows)  
      {  
         Console.WriteLine("   {0} - {1}", row["ID"], row["OtherColumn"]);  
      }  
      // Close the connection.  
      conn.Close();  
   }  
}  
```  
  
## See Also  
 [Oracle and ADO.NET](../../../../docs/framework/data/adonet/oracle-and-adonet.md)   
 [ADO.NET Managed Providers and DataSet Developer Center](http://go.microsoft.com/fwlink/?LinkId=217917)