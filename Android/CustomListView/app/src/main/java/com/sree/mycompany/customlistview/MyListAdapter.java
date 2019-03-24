package com.sree.mycompany.customlistview;

import android.app.Activity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

public class MyListAdapter extends BaseAdapter
{
    private final Activity context;
    private final String[] TV_schedule;
    private final String[] TV_openingtime;
    private final String[] TV_closingtime;
    private final String[] TV_place;
    private final String[] TV_town;

    public MyListAdapter(Activity context, String[] TV_schedule, String[] TV_openingtime, String[] TV_closingtime, String[] TV_place, String[] TV_town) {
        this.context=context;
        this.TV_schedule=TV_schedule;
        this.TV_openingtime=TV_openingtime;
        this.TV_closingtime=TV_closingtime;
        this.TV_place=TV_place;
        this.TV_town=TV_town;
    }
    @Override
    public int getCount() {
        return TV_schedule.length;
    }

    @Override
    public Object getItem(int position) {
        return null;
    }

    @Override
    public long getItemId(int position) {
        return 0;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        LayoutInflater inflater = (LayoutInflater) context.getSystemService(Activity.LAYOUT_INFLATER_SERVICE);
        View rowview = inflater.inflate(R.layout.activity_customlistview,null);
        TextView schedule =  rowview.findViewById(R.id.TV_schedule);
        TextView openingtime =  rowview.findViewById(R.id.TV_opentime);
        TextView closingtime = rowview.findViewById(R.id.TV_closingtime);
        TextView place = rowview.findViewById(R.id.TV_place);
        TextView town = rowview.findViewById(R.id.TV_town);
        schedule.setText(TV_schedule[position]);
        openingtime.setText(TV_openingtime[position]);
        closingtime.setText(TV_closingtime[position]);
        place.setText(TV_place[position]);
        town.setText(TV_town[position]);
        return rowview;
    }
}