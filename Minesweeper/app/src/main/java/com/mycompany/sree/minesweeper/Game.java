package com.mycompany.sree.minesweeper;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Gravity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.GridLayout;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Random;

public class Game extends AppCompatActivity {
    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_game);
        Intent intent = getIntent();
        String value = intent.getStringExtra("Value");
        Toast.makeText(Game.this, value, Toast.LENGTH_SHORT).show();
        GridLayout gridLayout = findViewById(R.id.GridLayout);
        int val = Integer.parseInt(value);
        gridLayout.setRowCount(val);
        int count=0;
        gridLayout.setColumnCount(val);
        for(int i=0;i<val;i++)
        {
            for( int j=0;j<val;j++)
            {
                count++;
                Button button=new Button(this);
                button.setTag(""+0);
                if(val==8) {
                    gridLayout.addView(button, 115, 115);
                }
                else if(val==6){
                    gridLayout.addView(button, 160, 160);
                }
                else if(val==4)
                {
                    gridLayout.addView(button, 220, 220);
                }
            }
        }
        final int[][] matrix=new int[val][val];
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++)
            {
                matrix[i][j]=0;
            }
        }
        int random=2;
        if(val==4)
        {
            random=2;
        }
        else if(val==6)
        {
            random=5;
        }
        else if(val==8)
        {
            random=10;
        }
        Random rand= new Random();
        int row=0,col=0;
        for(int i=0;i<random;i++)
        {
            row=rand.nextInt(val);
            col=rand.nextInt(val);
            if(matrix[row][col]==0)
            {
                matrix[row][col]=-1;
            }
            else
            {
                i--;
            }
        }
        /*for(int i=0;i<gridLayout.getChildCount();i++)
        {
            btn = (Button) gridLayout.getChildAt(i);
            btn.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    //btn.setText(""+matrix);

                }
            });
        }
        for(int i = 0 ;i<val;i++)
        {
            for(int j=0;j<val;j++)
            {
                if (matrix[i-1][j-1]==-1&&i-1>=0&&j-1>=0)
                    matrix[i][j]=matrix[i][j]+1;
                else if (matrix[i-1][j]==-1&&i-1>=0)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i-1][j+1]==-1&&i-1>=0&&j+1<val)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i][j-1]==-1&&j-1>=0)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i][j+1]==-1&&j+1<val)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i+1][j-1]==-1&&i+1<val&&j-1>=0)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i+1][j]==-1&&i+1<val)
                    matrix[i][j]=matrix[i][j]+1;
                else if(matrix[i+1][j+1]==-1&&i+1<val&&j+1<val)
                    matrix[i][j]=matrix[i][j]+1;
            }
        }*/
        String s = "";
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++) {
                s=s+matrix[i][j];
            }
            s=s+"-";
        }
        TextView textView=(TextView)findViewById(R.id.textView1);
        textView.setText(s);
    }
}
