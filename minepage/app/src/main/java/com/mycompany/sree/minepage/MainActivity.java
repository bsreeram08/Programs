package com.mycompany.sree.minepage;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    public void Nextpage(View view)
    {
        String value = view.getTag().toString();
        //Toast.makeText(MainActivity.this,value,Toast.LENGTH_SHORT).show();
        Intent intent= new Intent(MainActivity.this,Main2Activity.class);
        intent.putExtra("Value",value);
        startActivity(intent);
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
