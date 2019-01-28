package com.mycompany.sree.listviewstudy;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        final ArrayList<String> Listitems= new ArrayList<String>();
        ListView listView = findViewById(R.id.ListView1);
        for(int i=0;i<10;i++)
        {
            Listitems.add("Milton");
            Listitems.add("Kamalesh");
            Listitems.add("Sanjay");
            Listitems.add("Sathvik");
            Listitems.add("Richard");
            Listitems.add("Siva");
            Listitems.add("Sivaramakrishnan");
            Listitems.add("Sreeram");
            Listitems.add("Sujay");
            Listitems.add("Surya");
            Listitems.add("Sushil");
            Listitems.add("Swakshan");
            Listitems.add("Vithiya Prakash");
            Listitems.add("Vishnu");
            Listitems.add("Yogeshwar");
            Listitems.add("Yogeshwaran");
        }
        try {
            ArrayAdapter<String> stringArrayAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, Listitems);
            //used to attach an adapter to the list items that is present in the list to add it to the list view.
            listView.setAdapter(stringArrayAdapter);
        }
        catch (Exception E){
            Toast.makeText(MainActivity.this,"There is an Error",Toast.LENGTH_SHORT).show();
        }
        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                view.animate().rotation(36000).setDuration(500);
            }
        });
    }
}
