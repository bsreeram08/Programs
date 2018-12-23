package com.custlogin.login.fourfuncapps;

        import android.net.Uri;
        import android.os.Bundle;
        import android.app.Activity;
        import android.content.Intent;
        import android.telephony.SmsManager;
        //import android.view.Menu;
        import android.view.View;
        import android.view.View.OnClickListener;
        import android.widget.Button;
        import android.widget.EditText;
        import android.widget.Toast;

public class mainpage extends Activity {
    //private static final int MY_PERMISSION_REQUEST_SEND_SMS = 1;
    Button sms, call, btnurl, logout;
    EditText phno, message, urldataval;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_mainpage);
        sms = (Button) findViewById(R.id.sms);
        call = (Button) findViewById(R.id.call);
        btnurl = (Button) findViewById(R.id.urlbtn);
        logout = (Button) findViewById(R.id.logout);
        phno = (EditText) findViewById(R.id.phonenumber);
        String phoneno = phno.getText().toString();
        message = (EditText) findViewById(R.id.message);
        String messageval = message.getText().toString();
        urldataval = (EditText) findViewById(R.id.urldata);
        sms.setOnClickListener(new OnClickListener() {
            @Override
            public void onClick(View arg0) {
                String mobnumber = phno.getText().toString();
                String messagetxt=message.getText().toString();
                try {
                    SmsManager smsManager = SmsManager.getDefault();
                    smsManager.sendTextMessage(mobnumber, null, messagetxt, null, null);
                    Toast.makeText(getApplicationContext(), "SMS sent.", Toast.LENGTH_LONG).show();
                }
                catch (Exception e)
                {
                    Toast.makeText(getApplicationContext(), "SMS failed, please try again.", Toast.LENGTH_LONG).show();
                    e.printStackTrace();
                }
                //SmsManager smsManager = SmsManager.getDefault();
                //smsManager.sendTextMessage(destinationAddress, scAddress, text, sentIntent, deliveryIntent)
                //smsManager.sendTextMessage(mobnumber, null, messagetxt, null, null);
                //Toast.makeText(mainpage.this,"sms send", Toast.LENGTH_SHORT).show();
            }
        });
        call.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {
                String mobnumber = phno.getText().toString();
                Intent ans = new Intent(Intent.ACTION_CALL,Uri.parse("tel:"+ mobnumber));
                startActivity( ans );

            }
        });
        btnurl.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {
                String data = urldataval.getText().toString();
                String urlstr = "https://" + data;
                Toast.makeText(mainpage.this, data,Toast.LENGTH_LONG ).show();
                Intent intent = new Intent(Intent.ACTION_VIEW, Uri.parse(urlstr));
                startActivity(intent);
            }
        });
        logout.setOnClickListener(new OnClickListener() {

            @Override
            public void onClick(View arg0) {
                Toast.makeText(mainpage.this, "Byee!", Toast.LENGTH_SHORT).show();
                finish();

            }
        });
    }

}

