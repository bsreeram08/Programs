package com.mycompany.sree.minesweeper;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.GridLayout;

import java.util.Random;

public class Gameplay extends AppCompatActivity {
    Intent intent = getIntent();
    int val;
    int[][] matrix;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_gameplay);
        String value = null;
        value= intent.getStringExtra("Value");
        val=Integer.parseInt(value);
        matrix=new int[val][val];
        GridLayout gridLayout = findViewById(R.id.GridLayout);
        gridLayout.setRowCount(val);
        int count=0,random=10;
        gridLayout.setColumnCount(val);
        for(int i=0;i<val;i++)
        {
            for( int j=0;j<val;j++)
            {
                matrix[i][j]=0;
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
        count=-1;
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++)
            {
                count++;
                Button b1 = (Button) gridLayout.getChildAt(count);
                if(matrix[i][j]==-1)
                {
                    b1.setText("M");
                    b1.setTag("M");
                }
                else{

                    if (i-1>=0&&j-1>=0&&matrix[i-1][j-1]==-1)
                        matrix[i][j]++;
                    if (i-1>=0&&matrix[i-1][j]==-1)
                        matrix[i][j]++;
                    if(i-1>=0&&j+1<val&&matrix[i-1][j+1]==-1)
                        matrix[i][j]++;
                    if(j-1>=0&&matrix[i][j-1]==-1)
                        matrix[i][j]++;
                    if(j+1<val&&matrix[i][j+1]==-1)
                        matrix[i][j]++;
                    if(i+1<val&&j-1>=0&&matrix[i+1][j-1]==-1)
                        matrix[i][j]++;
                    if(i+1<val&&matrix[i+1][j]==-1)
                        matrix[i][j]++;
                    if(i+1<val&&j+1<val&&matrix[i+1][j+1]==-1)
                        matrix[i][j]++;
                    b1.setText(""+matrix[i][j]);
                }
            }
        }
    }
}
