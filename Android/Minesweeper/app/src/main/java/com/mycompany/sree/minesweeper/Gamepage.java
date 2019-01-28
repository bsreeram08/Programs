package com.mycompany.sree.minesweeper;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class Gamepage extends AppCompatActivity {

    public void Nextpage(View view)
    {
        String value = view.getTag().toString();
        //Toast.makeText(Gamepage.this,""+value,Toast.LENGTH_SHORT).show();
        Intent intent= new Intent(Gamepage.this,Gameplay.class);
        intent.putExtra("Value",value);
        startActivity(intent);
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_gamepage);
    }
}
