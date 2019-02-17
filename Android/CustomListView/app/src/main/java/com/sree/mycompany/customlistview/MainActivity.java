package com.sree.mycompany.customlistview;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    String[] TV_schedule={"TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3"};
    String[] TV_opentime={"TV_opentime1","TV_opentime2","TV_opentime3","TV_opentime1","TV_opentime2","TV_opentime3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3"};
    String[] TV_closingtime={"TV_closingtime1","TV_closingtime2","TV_closingtime3","TV_closingtime1","TV_closingtime2","TV_closingtime3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3"};
    String[] TV_place={"TV_place1","TV_place2","TV_place3","TV_place1","TV_place2","TV_place3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3"};
    String[] TV_town={"TV_town1","TV_town2","TV_town3","TV_town1","TV_town2","TV_town3","TV_schedule1","TV_schedule2","TV_schedule3","TV_schedule1","TV_schedule2","TV_schedule3"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        try {
            MyListAdapter adapter = new MyListAdapter(MainActivity.this,TV_schedule,TV_opentime,TV_closingtime,TV_place,TV_town);
            ListView listView = findViewById(R.id.listview);
            listView.setAdapter(adapter);
            listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                @Override
                public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                    String toastmessage ="The item CLicked is:"+position;
                    Toast.makeText(MainActivity.this,toastmessage,Toast.LENGTH_SHORT).show();
                }
            });
        }
        catch (Exception e)
        {
            e.printStackTrace();
        }
    }
}
