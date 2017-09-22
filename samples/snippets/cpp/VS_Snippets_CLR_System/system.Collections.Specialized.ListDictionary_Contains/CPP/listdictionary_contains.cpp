

// The following code example searches for an element in a ListDictionary.
// <snippet1>
#using <System.dll>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Specialized;
void PrintKeysAndValues( IDictionary^ myCol )
{
   Console::WriteLine( "   KEY                       VALUE" );
   IEnumerator^ myEnum = myCol->GetEnumerator();
   while ( myEnum->MoveNext() )
   {
      DictionaryEntry de = safe_cast<DictionaryEntry>(myEnum->Current);
      Console::WriteLine( "   {0,-25} {1}", de.Key, de.Value );
   }

   Console::WriteLine();
}

int main()
{
   
   // Creates and initializes a new ListDictionary.
   ListDictionary^ myCol = gcnew ListDictionary;
   myCol->Add( "Braeburn Apples", "1.49" );
   myCol->Add( "Fuji Apples", "1.29" );
   myCol->Add( "Gala Apples", "1.49" );
   myCol->Add( "Golden Delicious Apples", "1.29" );
   myCol->Add( "Granny Smith Apples", "0.89" );
   myCol->Add( "Red Delicious Apples", "0.99" );
   
   // Displays the values in the ListDictionary in three different ways.
   Console::WriteLine( "Initial contents of the ListDictionary:" );
   PrintKeysAndValues( myCol );
   
   // Searches for a key.
   if ( myCol->Contains( "Kiwis" ) )
      Console::WriteLine( "The collection contains the key \"Kiwis\"." );
   else
      Console::WriteLine( "The collection does not contain the key \"Kiwis\"." );

   Console::WriteLine();
}

/*
This code produces the following output.

Initial contents of the ListDictionary:
   KEY                       VALUE
   Braeburn Apples           1.49
   Fuji Apples               1.29
   Gala Apples               1.49
   Golden Delicious Apples   1.29
   Granny Smith Apples       0.89
   Red Delicious Apples      0.99

The collection does not contain the key "Kiwis".

*/
// </snippet1>
