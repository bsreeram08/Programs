package com.mycompany.sree.minepage;

import android.content.Intent;
import android.graphics.Point;
import android.os.Build;
import android.support.annotation.RequiresApi;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.view.Gravity;
import android.view.View;
import android.widget.Button;
import android.widget.GridLayout;

import java.util.Random;

public class Main2Activity extends AppCompatActivity {
    Intent intent;
    GridLayout gridLayout;
    int val;
    int[][] matrix;
    int flag;
    //int[] visited = new int [val*val];
    int findplace(int r,int c)
    {
        int count=-1;
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++) {
                count++;
                if(i==r&&j==c)
                {
                    return (count);
                }
            }
        }
        return 0;
    }
    int checkplacevalue(int place)
    {
        int count=-1;
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++)
            {
                count++;
                if (count == place)
                {
                    if (matrix[i][j] == -1)
                        return 1;
                    else
                        return 0;
                }
            }
        }
        return 0;
    }
    int[] dptopx(int dp)
    {
        Point size = new Point();
        getWindowManager().getDefaultDisplay().getSize(size);
        int screenWidth = size.x;
        int screenHeight = size.y;
        int[] data = {0,0};
        data[0]=screenWidth/(val+1);
        data[1]=screenHeight/(val*2);
        return data;
    }
    public void findneighbours(int r,int c)
    {
        r--;
        c--;
        for (int i = 0; i < 9; i++)
        {
            if (i % 3 == 0 && i != 0)
            {
                r++;
                c -= 3;
            }
            if ((r >= 0 && r < val) && (c >= 0 && c < val))
            {
                int placeholder=findplace(r,c);
                Button b1 = (Button)gridLayout.getChildAt(placeholder);
                if (b1.getTag().toString().equals("0")||b1.getTag().toString().equals("F")&&matrix[r][c]!=-1)
                {
                    b1.setTag("1");
                    b1.setText(""+matrix[r][c]);
                    if (matrix[r][c]==0)
                    {
                        findneighbours(r,c);
                    }
                }

            }
            c++;
        }
    }
    public void neighbours(int count)
    {
        int cnt=-1,r = 0,c = 0;
        for(int i=0;i<val;i++)
        {
            for(int j=0;j<val;j++)
            {
                cnt++;
                if(count==cnt)
                {
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        Button b1 = (Button) gridLayout.getChildAt(count);
        b1.setText(""+matrix[r][c]);
        if(matrix[r][c]==0)
        {
            findneighbours(r,c);
        }
    }
    @RequiresApi(api = Build.VERSION_CODES.M)
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        String value;
        intent = getIntent();
        value= intent.getStringExtra("Value");
        val=Integer.parseInt(value);
        matrix=new int[val][val];
        gridLayout = (GridLayout)findViewById(R.id.gridlayout);
        gridLayout.setRowCount(val);
        int count=0,random=10;
        final int[] actflags = {0};
        gridLayout.setColumnCount(val);
        gridLayout.setAlignmentMode(GridLayout.ALIGN_BOUNDS);
        gridLayout.setForegroundGravity(Gravity.CENTER);
        for(int i=0;i<val;i++)
        {
            for( int j=0;j<val;j++)
            {
                matrix[i][j]=0;
                count++;
                Button button=new Button(this);
                button.setTag(""+0);
                button.setBackgroundResource(R.drawable.button);
                int x[] = dptopx(40);
                if(val==8) {
                    gridLayout.addView(button, x[0]-5, x[1]);
                    flag=random=10;
                }
                else if(val==6){
                    gridLayout.addView(button, x[0], x[1]);
                    flag=random=6;
                }
                else if(val==4)
                {
                    gridLayout.addView(button, x[0]+8, x[1]);
                    flag=random=2;
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
                }
            }
        }
        for(int i=0;i<gridLayout.getChildCount();i++)
        {
            final Button button =(Button) gridLayout.getChildAt(i);
            final int place=i;
             final int finalRandom = random;
            button.setOnLongClickListener(new View.OnLongClickListener() {
                @Override
                public boolean onLongClick(View v) {
                    if(button.getTag().toString().equals("F")&& actflags[0] <finalRandom)
                    {
                        actflags[0]++;
                        button.setBackgroundResource(R.drawable.button);
                    }
                    else {
                        actflags[0]--;
                        button.setBackgroundResource(R.drawable.flag);
                        button.setTag("F");
                        setListner(button,place,finalRandom);

                    }
                    return false;
                }
            });
            setListner(button,place,finalRandom);

        }
        final Button b1 = findViewById(R.id.continueButton);
        b1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if(b1.getTag().toString().equals("WIN")) {
                    Intent intent = new Intent(Main2Activity.this, GameWinPage.class);
                    startActivity(intent);
                }
                else if (b1.getTag().toString().equals("LOSE"))
                {
                    gridLayout.setOnClickListener(null);
                    Intent intent = new Intent(Main2Activity.this, GameLosePage.class);
                    startActivity(intent);
                }
            }
        });
    }
    void setListner(final Button button, final int place, final int finalRandom)
    {
        button.setOnClickListener(new View.OnClickListener() {
            @RequiresApi(api = Build.VERSION_CODES.LOLLIPOP)
            @Override
            public void onClick(View v) {
                String tagval = button.getTag().toString();
                if(tagval.equals("M"))
                {
                    for(int blow=0;blow<gridLayout.getChildCount();blow++)
                    {
                        Button blowbtn =(Button) gridLayout.getChildAt(blow);
                        if((blowbtn.getTag().toString().equals("M")||blowbtn.getTag().toString().equals("F"))&&checkplacevalue(place)==1) {
                            blowbtn.setBackground(getDrawable(R.drawable.explodegif));
                            blowbtn.animate().alphaBy((float)0.4).rotation(3600).setDuration(1000);
                        }
                        Button b1 =  findViewById(R.id.continueButton);
                        b1.setAlpha(1);
                        b1.setTag("LOSE");
                    }
                }
                else if(tagval.equals("0"))
                {
                    button.setTag("1");
                    neighbours(place);
                }
                int checkplace=-1,allvalues=-1;
                for(int i=0;i<val;i++)
                {
                    for(int j=0;j<val;j++)
                    {
                        checkplace++;
                        Button button =(Button) gridLayout.getChildAt(checkplace);
                        if(matrix[i][j]!=-1&&button.getTag().toString().equals("1"))
                        {
                            allvalues++;
                        }
                    }
                }
                if(allvalues==(val*val)- finalRandom -1)
                {
                    Button b1 = findViewById(R.id.continueButton);
                    b1.setAlpha(1);
                    b1.setTag("WIN");
                }
            }
        });
    }
}