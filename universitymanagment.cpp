#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdio>
#include<fstream>
#include<string.h>
using namespace std;
static int  ch = 50, wat = 40, sam = 30, roll = 40, pizza = 1000, d1 = 50, d2 = 80, d3 = 110, d4 = 150, b1 = 80, b2 = 150, b3 = 40, b4 = 200, b5 = 250, b6 = 180, f1 = 100, f2 = 150, c1 = 150, pulao = 250, p2 = 150;

class menu
{
protected:
    string a;
public:
    void mon()
    {
        cout << "timmings 7am to 9 pm" << endl;
        cout << "chai(ch)                             RS." << ch << endl;
        cout << "water(wat)                           RS." << wat << endl;
        cout << "samosa(sam)                          RS." << sam << endl;
        cout << "roll(roll)                           RS." << roll << endl;
        cout << "drink                                RS." << d1 << endl;
        cout << "                  pizza                     " << endl;
        cout << "pizza                                RS." << pizza << endl;
        cout << "                 biryani                    " << endl;
        cout << "biryani                              RS." << b1 << endl;
        cout << "biscuits(b3)                         RS." << b3 << endl;
        cout << "                  burger                   " << endl;
        cout << "burger                               RS." << b4 << endl;
    }
    void tue()
    {
        cout << "timmings 7am to 9 pm" << endl;
        cout << "chai(ch)                          RS." << ch << endl;
        cout << "water(wat)                        RS." << wat << endl;
        cout << "samosa(sam)                       RS." << sam << endl;
        cout << "roll(roll)                        RS." << roll << endl;
        cout << "drinks                            RS." << d1 << endl;

        cout << "                  pizza           " << endl;
        cout << "pizza                             RS." << pizza << endl;
        cout << "                 biryani               " << endl;
        cout << "biryani                           RS." << b1 << endl;
        cout << "biscuits(b3)                      RS." << b3 << endl;
        cout << "                    fries           " << endl;
        cout << " fries                            RS." << f1 << endl;
    }
    void wed()
    {
        cout << "timmings 7am to 9 pm" << endl;
        cout << "chai(ch)                         RS." << ch << endl;
        cout << "water(wat)                       RS." << wat << endl;
        cout << "samosa(sam)                      RS." << sam << endl;
        cout << "roll(roll)                       RS." << roll << endl;
        cout << "drinks                           RS." << d1 << endl;
        cout << "                  pizza           " << endl;
        cout << "pizza                            RS." << pizza << endl;
        cout << "                  pulao          " << endl;
        cout << " pulao                           RS." << pulao << endl;
        cout << "                    fries           " << endl;
        cout << "fries                            RS." << f1 << endl;
    }
    void thu()
    {
        cout << "timmings 7am to 9 pm" << endl;
        cout << "chai(ch)                         RS." << ch << endl;
        cout << "water(wat)                       RS." << wat << endl;
        cout << "samosa(sam)                      RS." << sam << endl;
        cout << "roll(roll)                       RS." << roll << endl;
        cout << "drinks                           RS." << d1 << endl;
        cout << "                 biryani               " << endl;
        cout << "biryani                          RS." << b1 << endl;
        cout << "                  burger               " << endl;
        cout << "burger               RS." << b4 << endl;
        cout << "                  fries           " << endl;
        cout << "fries                            RS." << f1 << endl;
    }
    void fri()
    {
        cout << "timmings 7am to 9 pm" << endl;
        cout << "chai(ch)                         RS." << ch << endl;
        cout << "water(wat)                       RS." << wat << endl;
        cout << "samosa(sam)                      RS." << sam << endl;
        cout << "roll(roll)                       RS." << roll << endl;
        cout << "drinks                           RS." << d1 << endl;
        cout << "                  pizza           " << endl;
        cout << "pizza                            RS." << pizza << endl;
        cout << "                 biryani               " << endl;
        cout << "biryani                          RS." << b1 << endl;
        cout << "biscuits(b3)                     RS." << b3 << endl;
        cout << "                  burger               " << endl;
        cout << "burger                           RS." << b4 << endl;
    }
    void sat()
    {
        cout << "********closed****************" << endl;

    }
    void sun()
    {
        cout << "***********holiday***********" << endl;

    }

};
class entry
{
public:
    void mon_entry()
    {
        cout << "for chai press             1 " << endl;
        cout << "for water press            2" << endl;
        cout << "for samosa press           3" << endl;
        cout << "for roll press             4" << endl;
        cout << "for drink press            5" << endl;
        cout << "for pizza press            6" << endl;
        cout << "for biryani press          7" << endl;
        cout << "for biscuit press          8" << endl;
    }
    void tue_entry()
    {
        cout << "for chai press          1 " << endl;
        cout << "for water press         2" << endl;
        cout << "for samosa press        3" << endl;
        cout << "for roll press          4" << endl;
        cout << "for drink press         5" << endl;
        cout << "for pizza press         6" << endl;
        cout << "for biryani press       7" << endl;
        cout << "for fries press         9" << endl;

    }
    void wed_entry()
    {
        cout << "for chai press                   1 " << endl;
        cout << "for water press                  2" << endl;
        cout << "for samosa press                 3" << endl;
        cout << "for roll press                   4" << endl;
        cout << "for drink press                  5" << endl;
        cout << "for pizza press                  6" << endl;
        cout << "for biscuit press                8" << endl;
        cout << "for pulao press                  10" << endl;
    }
    void thu_entry()
    {
        cout << "for chai press           1 " << endl;
        cout << "for water press          2" << endl;
        cout << "for samosa press         3" << endl;
        cout << "for roll press           4" << endl;
        cout << "for drink press          5" << endl;
        cout << "for biryani press        7" << endl;
        cout << "for fries press          9" << endl;
        cout << "for burger  press       11" << endl;

    }
    void fri_entry()
    {
        cout << "for chai press         1 " << endl;
        cout << "for water press        2" << endl;
        cout << "for samosa press       3" << endl;
        cout << "for roll press         4" << endl;
        cout << "for drink press        5" << endl;
        cout << "for pizza press        6" << endl;
        cout << "for biryani press      7" << endl;
        cout << "for burger  press      11" << endl;
    }
};
class orders :public menu, public entry
{
public:
    int  i = 0, y[1], v[100], n[100], p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0, p9 = 0, p10 = 0, p11 = 0, price, x;
    int total;
    void mon_order()
    {
    p:
        cout << "entry:" << endl;
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            cout << "chai" << endl;
            cout << "no of chai:";
            cin >> n[0];
            p1 = n[0] * ch;
            cout << "price:" << p1 << endl;
            break;
        case 2:
            cout << "water " << endl;
            cout << "no of water bottle:";
            cin >> n[1];
            p2 = n[1] * wat;
            cout << "price:" << p2 << endl;
            break;
        case 3:
            cout << "samosa" << endl;
            cout << "no of samosa:";
            cin >> n[2];
            p3 = n[2] * sam;
            cout << "price:" << p3 << endl;
            break;
        case 4:
            cout << "roll " << endl;
            cout << "no of ROLL:";
            cin >> n[3];
            p4 = n[3] * roll;
            cout << "price:" << p4 << endl;
            break;
        case 5:
            cout << "drink" << endl;
            cout << "no of drink:";
            cin >> n[4];
            p5 = n[4] * d1;
            cout << "price:" << p5 << endl;
            break;
        case 6:
            cout << "pizza" << endl;
            cout << "no of pizza:";
            cin >> n[5];
            p6 = n[5] * pizza;
            cout << "price:" << p6 << endl;
            break;
        case 7:
            cout << "biryani " << endl;
            cout << "no of biryanis:";
            cin >> n[6];
            p7 = n[6] * b1;
            cout << "price:" << p7 << endl;
            break;
        case 8:
            cout << "biscuit" << endl;
            cout << "no of biscuit:";
            cin >> n[7];
            p8 = n[7] * b3;
            cout << "price:" << p8 << endl;
            break;
            cout << "invalid entry:" << endl;
        }
        cout << "press 1 for more items:" << endl;
        cout << "press other key for bill:";
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            i++;
            goto p;
        }
        else
        {
            total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11;
            cout << "total price:" << total << endl;
        }
    }
    void tue_order()
    {
    p:
        cout << "entry:" << endl;
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            cout << "chai" << endl;
            cout << "no of chai:";
            cin >> n[0];
            p1 = n[0] * ch;
            cout << "price:" << p1 << endl;
            break;
        case 2:
            cout << "water " << endl;
            cout << "no of water bottle:";
            cin >> n[1];
            p2 = n[1] * wat;
            cout << "price:" << p2 << endl;
            break;
        case 3:
            cout << "samosa" << endl;
            cout << "no of samosa:";
            cin >> n[2];
            p3 = n[2] * sam;
            cout << "price:" << p3 << endl;
            break;
        case 4:
            cout << "roll " << endl;
            cout << "no of ROLL:";
            cin >> n[3];
            p4 = n[3] * roll;
            cout << "price:" << p4 << endl;
            break;
        case 5:
            cout << "drink" << endl;
            cout << "no of drink:";
            cin >> n[4];
            p5 = n[4] * d1;
            cout << "price:" << p5 << endl;
            break;
        case 6:
            cout << "pizza" << endl;
            cout << "no of pizza:";
            cin >> n[5];
            p6 = n[5] * pizza;
            cout << "price:" << p6 << endl;
            break;
        case 7:
            cout << "biryani " << endl;
            cout << "no of biryanis:";
            cin >> n[6];
            p7 = n[6] * b1;
            cout << "price:" << p7 << endl;
            break;
        case 9:
            cout << "fries" << endl;
            cout << "no of plates";
            cin >> n[7];
            p8 = n[7] * f1;
            cout << "price:" << p8 << endl;
            break;
            cout << "invalid entry:" << endl;
        }
        cout << "press 1 for more items:" << endl;
        cout << "press 0 for bill:";
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            i++;
            goto p;
        }
        else if (x == 0)
        {
            total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11;
            cout << "total price:" << total << endl;
        }
    }
    void wed_order()
    {
    p:
        cout << "entry:" << endl;
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            cout << "chai" << endl;
            cout << "no of chai:";
            cin >> n[0];
            p1 = n[0] * ch;
            cout << "price:" << p1 << endl;
            break;
        case 2:
            cout << "water " << endl;
            cout << "no of water bottle:";
            cin >> n[1];
            p2 = n[1] * wat;
            cout << "price:" << p2 << endl;
            break;
        case 3:
            cout << "samosa" << endl;
            cout << "no of samosa:";
            cin >> n[2];
            p3 = n[2] * sam;
            cout << "price:" << p3 << endl;
            break;
        case 4:
            cout << "roll " << endl;
            cout << "no of ROLL:";
            cin >> n[3];
            p4 = n[3] * roll;
            cout << "price:" << p4 << endl;
            break;
        case 5:
            cout << "drink" << endl;
            cout << "no of drink:";
            cin >> n[4];
            p5 = n[4] * d1;
            cout << "price:" << p5 << endl;
            break;
        case 6:
            cout << "pizza" << endl;
            cout << "no of pizza:";
            cin >> n[5];
            p6 = n[5] * pizza;
            cout << "price:" << p6 << endl;
            break;
        case 8:
            cout << "biscuit " << endl;
            cout << "no of biscuits:";
            cin >> n[6];
            p7 = n[6] * b3;
            cout << "price:" << p7 << endl;
            break;
        case 10:
            cout << "pulao" << endl;
            cout << "no of plates";
            cin >> n[7];
            p8 = n[7] * pulao;
            cout << "price:" << p8 << endl;
            break;
            cout << "invalid entry:" << endl;
        }
        cout << "press 1 for more items:" << endl;
        cout << "press 0 for bill:";
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            i++;
            goto p;
        }
        else if (x == 0)
        {
            total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11;
            cout << "total price:" << total << endl;
        }
    }
    void thu_order()
    {
    p:
        cout << "entry:" << endl;
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            cout << "chai" << endl;
            cout << "no of chai:";
            cin >> n[0];
            p1 = n[0] * ch;
            cout << "price:" << p1 << endl;
            break;
        case 2:
            cout << "water " << endl;
            cout << "no of water bottle:";
            cin >> n[1];
            p2 = n[1] * wat;
            cout << "price:" << p2 << endl;
            break;
        case 3:
            cout << "samosa" << endl;
            cout << "no of samosa:";
            cin >> n[2];
            p3 = n[2] * sam;
            cout << "price:" << p3 << endl;
            break;
        case 4:
            cout << "roll " << endl;
            cout << "no of ROLL:";
            cin >> n[3];
            p4 = n[3] * roll;
            cout << "price:" << p4 << endl;
            break;
        case 5:
            cout << "drink" << endl;
            cout << "no of drink:";
            cin >> n[4];
            p5 = n[4] * d1;
            cout << "price:" << p5 << endl;
            break;
        case 7:
            cout << "pizza" << endl;
            cout << "no of pizza:";
            cin >> n[5];
            p6 = n[5] * pizza;
            cout << "price:" << p6 << endl;
            break;
        case 9:
            cout << "fries " << endl;
            cout << "fries plates:";
            cin >> n[6];
            p7 = n[6] * f1;
            cout << "price:" << p7 << endl;
            break;
        case 11:
            cout << "burger" << endl;
            cout << "no of burgers";
            cin >> n[7];
            p8 = n[7] * b2;
            cout << "price:" << p8 << endl;
            break;
            cout << "invalid entry:" << endl;
        }
        cout << "press 1 for more items:" << endl;
        cout << "press 0 for bill:";
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            i++;
            goto p;
        }
        else if (x == 0)
        {
            total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11;
            cout << "total price:" << total << endl;
        }
    }
    void fri_order()
    {
    p:
        cout << "entry:" << endl;
        cin >> v[i];
        switch (v[i])
        {
        case 1:
            cout << "chai" << endl;
            cout << "no of chai:";
            cin >> n[0];
            p1 = n[0] * ch;
            cout << "price:" << p1 << endl;
            break;
        case 2:
            cout << "water " << endl;
            cout << "no of water bottle:";
            cin >> n[1];
            p2 = n[1] * wat;
            cout << "price:" << p2 << endl;
            break;
        case 3:
            cout << "samosa" << endl;
            cout << "no of samosa:";
            cin >> n[2];
            p3 = n[2] * sam;
            cout << "price:" << p3 << endl;
            break;
        case 4:
            cout << "roll " << endl;
            cout << "no of ROLL:";
            cin >> n[3];
            p4 = n[3] * roll;
            cout << "price:" << p4 << endl;
            break;
        case 5:
            cout << "drink" << endl;
            cout << "no of drink:";
            cin >> n[4];
            p5 = n[4] * d1;
            cout << "price:" << p5 << endl;
            break;
        case 6:
            cout << "pizza" << endl;
            cout << "no of pizza:";
            cin >> n[5];
            p6 = n[5] * pizza;
            cout << "price:" << p6 << endl;
            break;
        case 7:
            cout << "biryani" << endl;
            cout << "no of plates of biryani:";
            cin >> n[6];
            p7 = n[6] * b1;
            cout << "price:" << p7 << endl;
            break;
        case 11:
            cout << "burger" << endl;
            cout << "no of burgers";
            cin >> n[7];
            p8 = n[7] * b2;
            cout << "price:" << p8 << endl;
            break;
            cout << "invalid entry:" << endl;
        }
        cout << "press 1 for more items:" << endl;
        cout << "press 0 for bill:";
        cin >> x;
        cout << endl;
        if (x == 1)
        {
            i++;
            goto p;
        }
        else if (x == 0)
        {
            total = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10 + p11;
            cout << "total price:" << total << endl;
        }
    }
};
class cansel :public orders
{
public:
    int newprice = 0, j = 0, y[2], i = 0, h[100], m[100], c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0, c10 = 0, c11 = 0;
    void mon_cansel()
    {
    p:
        cout << "enter the entry:";
        cin >> h[j];
        if (v[i] == h[j])
        {
            switch (v[j])
            {

            case 1:
                cout << "chai" << endl;
                cout << "no of chai:";
                cin >> m[0];
                if (m[0] <= n[0])
                {
                    c1 = m[0] * ch;
                    cout << "price:" << c1 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 2:
                cout << "water " << endl;
                cout << "no of water bottle:";
                cin >> m[1];
                if (m[1] <= n[1])
                {
                    c2 = m[1] * wat;
                    cout << "price:" << c2 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 3:
                cout << "samosa" << endl;
                cout << "no of samosa:";
                cin >> m[2];
                if (m[2] <= n[2]) {
                    c3 = m[2] * sam;
                    cout << "price:" << c3 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 4:
                cout << "roll " << endl;
                cout << "no of ROLL:";
                cin >> m[3];
                if (m[3] <= n[3]) {
                    c4 = m[3] * roll;
                    cout << "price:" << c4 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 5:
                cout << "drink" << endl;
                cout << "no of drink:";
                cin >> m[4];
                if (m[4] <= n[4])
                {
                    c5 = m[4] * d1;
                    cout << "price:" << c5 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 6:
                cout << "pizza" << endl;
                cout << "no of pizza:";
                cin >> m[5];
                if (m[5] <= n[5])
                {
                    c6 = m[5] * pizza;
                    cout << "price:" << c6 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 7:
                cout << "biryani " << endl;
                cout << "no of biryanis:";
                cin >> m[6];
                if (m[6] <= n[6]) {
                    c7 = m[6] * b1;
                    cout << "price:" << c7 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 8:
                cout << "biscuit" << endl;
                cout << "no of biscuit:";
                cin >> m[7];
                if (m[7] <= n[7])
                {
                    c8 = m[7] * b3;
                    cout << "price:" << c8 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
                cout << "invalid entry:" << endl;
            }
            cout << "press 1 to cansel more items:" << endl;
            cout << "press 0 for bill:";
            cin >> x;
            cout << endl;
            if (x == 1)
            {
                i++;
                j++;
                goto p;
            }
            else if (x == 0)
            {
                newprice = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11);
                cout << "reduce price:" << newprice << endl;
            }
        }
        else
        {
            cout << "wrong entry:" << endl;
            cout << "select the item from buyed items:" << endl;
            goto p;
        }
    }
    void tue_cansel()
    {
    p:
        cout << "enter the entry:";
        cin >> h[j];
        if (v[i] == h[j])
        {
            switch (v[j])
            {

            case 1:
                cout << "chai" << endl;
                cout << "no of chai:";
                cin >> m[0];
                if (m[0] <= n[0])
                {
                    c1 = m[0] * ch;
                    cout << "price:" << c1 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 2:
                cout << "water " << endl;
                cout << "no of water bottle:";
                cin >> m[1];
                if (m[1] <= n[1])
                {
                    c2 = m[1] * wat;
                    cout << "price:" << c2 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 3:
                cout << "samosa" << endl;
                cout << "no of samosa:";
                cin >> m[2];
                if (m[2] <= n[2]) {
                    c3 = m[2] * sam;
                    cout << "price:" << c3 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 4:
                cout << "roll " << endl;
                cout << "no of ROLL:";
                cin >> m[3];
                if (m[3] <= n[3]) {
                    c4 = m[3] * roll;
                    cout << "price:" << c4 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 5:
                cout << "drink" << endl;
                cout << "no of drink:";
                cin >> m[4];
                if (m[4] <= n[4])
                {
                    c5 = m[4] * d1;
                    cout << "price:" << c5 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 6:
                cout << "pizza" << endl;
                cout << "no of pizza:";
                cin >> m[5];
                if (m[5] <= n[5])
                {
                    c6 = m[5] * pizza;
                    cout << "price:" << c6 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 7:
                cout << "biryani " << endl;
                cout << "no of biryanis:";
                cin >> m[6];
                if (m[6] <= n[6]) {
                    c7 = m[6] * b1;
                    cout << "price:" << c7 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 8:
                cout << "fries" << endl;
                cout << "fries plates:";
                cin >> m[7];
                if (m[7] <= n[7])
                {
                    c8 = m[7] * f1;
                    cout << "price:" << c8 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
                cout << "invalid entry:" << endl;
            }
            cout << "press 1 to cansel more items:" << endl;
            cout << "press 0 for bill:";
            cin >> x;
            cout << endl;
            if (x == 1)
            {
                i++;
                j++;
                goto p;
            }
            else if (x == 0)
            {
                newprice = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11);
                cout << "reduce price:" << newprice << endl;
            }
        }
        else
        {
            cout << "wrong entry:" << endl;
            cout << "select the item from buyed items:" << endl;
            goto p;
        }
    }
    void wed_cansel()
    {
    p:
        cout << "enter the entry:";
        cin >> h[j];
        if (v[i] == h[j])
        {
            switch (v[j])
            {

            case 1:
                cout << "chai" << endl;
                cout << "no of chai:";
                cin >> m[0];
                if (m[0] <= n[0])
                {
                    c1 = m[0] * ch;
                    cout << "price:" << c1 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 2:
                cout << "water " << endl;
                cout << "no of water bottle:";
                cin >> m[1];
                if (m[1] <= n[1])
                {
                    c2 = m[1] * wat;
                    cout << "price:" << c2 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 3:
                cout << "samosa" << endl;
                cout << "no of samosa:";
                cin >> m[2];
                if (m[2] <= n[2]) {
                    c3 = m[2] * sam;
                    cout << "price:" << c3 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 4:
                cout << "roll " << endl;
                cout << "no of ROLL:";
                cin >> m[3];
                if (m[3] <= n[3]) {
                    c4 = m[3] * roll;
                    cout << "price:" << c4 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 5:
                cout << "drink" << endl;
                cout << "no of drink:";
                cin >> m[4];
                if (m[4] <= n[4])
                {
                    c5 = m[4] * d1;
                    cout << "price:" << c5 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 6:
                cout << "pizza" << endl;
                cout << "no of pizza:";
                cin >> m[5];
                if (m[5] <= n[5])
                {
                    c6 = m[5] * pizza;
                    cout << "price:" << c6 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 8:
                cout << "biscuits " << endl;
                cout << "no of biscuits:";
                cin >> m[6];
                if (m[6] <= n[6]) {
                    c7 = m[6] * b3;
                    cout << "price:" << c7 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 10:
                cout << "pulao" << endl;
                cout << "pulao plates:";
                cin >> m[7];
                if (m[7] <= n[7])
                {
                    c8 = m[7] * p1;
                    cout << "price:" << c8 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
                cout << "invalid entry:" << endl;
            }
            cout << "press 1 to cansel more items:" << endl;
            cout << "press 0 for bill:";
            cin >> x;
            cout << endl;
            if (x == 1)
            {
                i++;
                j++;
                goto p;
            }
            else if (x == 0)
            {
                newprice = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11);
                cout << "reduce price:" << newprice << endl;
            }
        }
        else
        {
            cout << "wrong entry:" << endl;
            cout << "select the item from buyed items:" << endl;
            goto p;
        }
    }
    void thu_cansel()
    {
    p:
        cout << "enter the entry:";
        cin >> h[j];
        if (v[i] == h[j])
        {
            switch (v[j])
            {

            case 1:
                cout << "chai" << endl;
                cout << "no of chai:";
                cin >> m[0];
                if (m[0] <= n[0])
                {
                    c1 = m[0] * ch;
                    cout << "price:" << c1 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 2:
                cout << "water " << endl;
                cout << "no of water bottle:";
                cin >> m[1];
                if (m[1] <= n[1])
                {
                    c2 = m[1] * wat;
                    cout << "price:" << c2 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 3:
                cout << "samosa" << endl;
                cout << "no of samosa:";
                cin >> m[2];
                if (m[2] <= n[2]) {
                    c3 = m[2] * sam;
                    cout << "price:" << c3 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 4:
                cout << "roll " << endl;
                cout << "no of ROLL:";
                cin >> m[3];
                if (m[3] <= n[3]) {
                    c4 = m[3] * roll;
                    cout << "price:" << c4 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 5:
                cout << "drink" << endl;
                cout << "no of drink:";
                cin >> m[4];
                if (m[4] <= n[4])
                {
                    c5 = m[4] * d1;
                    cout << "price:" << c5 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 7:
                cout << "pizza" << endl;
                cout << "no of pizza:";
                cin >> m[5];
                if (m[5] <= n[5])
                {
                    c6 = m[5] * pizza;
                    cout << "price:" << c6 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 9:
                cout << "fries " << endl;
                cout << "no of plates:";
                cin >> m[6];
                if (m[6] <= n[6]) {
                    c7 = m[6] * f1;
                    cout << "price:" << c7 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 11:
                cout << "burger" << endl;
                cout << "no of burger:";
                cin >> m[7];
                if (m[7] <= n[7])
                {
                    c8 = m[7] * b2;
                    cout << "price:" << c8 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
                cout << "invalid entry:" << endl;
            }
            cout << "press 1 to cansel more items:" << endl;
            cout << "press 0 for bill:";
            cin >> x;
            cout << endl;
            if (x == 1)
            {
                i++;
                j++;
                goto p;
            }
            else if (x == 0)
            {
                newprice = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11);
                cout << "reduce price:" << newprice << endl;
            }
        }
        else
        {
            cout << "wrong entry:" << endl;
            cout << "select the item from buyed items:" << endl;
            goto p;
        }
    }
    void fri_cansel()
    {
    p:
        cout << "enter the entry:";
        cin >> h[j];
        if (v[i] == h[j])
        {
            switch (v[j])
            {

            case 1:
                cout << "chai" << endl;
                cout << "no of chai:";
                cin >> m[0];
                if (m[0] <= n[0])
                {
                    c1 = m[0] * ch;
                    cout << "price:" << c1 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 2:
                cout << "water " << endl;
                cout << "no of water bottle:";
                cin >> m[1];
                if (m[1] <= n[1])
                {
                    c2 = m[1] * wat;
                    cout << "price:" << c2 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 3:
                cout << "samosa" << endl;
                cout << "no of samosa:";
                cin >> m[2];
                if (m[2] <= n[2]) {
                    c3 = m[2] * sam;
                    cout << "price:" << c3 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 4:
                cout << "roll " << endl;
                cout << "no of ROLL:";
                cin >> m[3];
                if (m[3] <= n[3]) {
                    c4 = m[3] * roll;
                    cout << "price:" << c4 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 5:
                cout << "drink" << endl;
                cout << "no of drink:";
                cin >> m[4];
                if (m[4] <= n[4])
                {
                    c5 = m[4] * d1;
                    cout << "price:" << c5 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 6:
                cout << "pizza" << endl;
                cout << "no of pizza:";
                cin >> m[5];
                if (m[5] <= n[5])
                {
                    c6 = m[5] * pizza;
                    cout << "price:" << c6 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 7:
                cout << "biryani " << endl;
                cout << "no of plates :";
                cin >> m[6];
                if (m[6] <= n[6]) {
                    c7 = m[6] * b1;
                    cout << "price:" << c7 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
            case 11:
                cout << "burger" << endl;
                cout << "no of burger:";
                cin >> m[7];
                if (m[7] <= n[7])
                {
                    c8 = m[7] * b2;
                    cout << "price:" << c8 << endl;
                }
                else
                {
                    cout << "invalid:" << endl;
                    goto p;
                }
                break;
                cout << "invalid entry:" << endl;
            }
            cout << "press 1 to cansel more items:" << endl;
            cout << "press 0 for bill:";
            cin >> x;
            cout << endl;
            if (x == 1)
            {
                i++;
                j++;
                goto p;
            }
            else if (x == 0)
            {
                newprice = (c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11);
                cout << "reduce price:" << newprice << endl;
            }
        }
        else
        {
            cout << "wrong entry:" << endl;
            cout << "select the item from buyed items:" << endl;
            goto p;
        }
    }
};
class portal
{
    char name[30][30], sub[30][30], clas[30][30];
    int n, s, i, j, m, roll[30], tot = 0, per;
    float avg, gpa;
public:

    void getdata()
    {
        cout << "Enter the number of classes: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "Enter class " << i + 1 << ": ";
            cin >> clas[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << "Enter the number of students in class " << clas[i] << ": ";
            cin >> s;
            cout << "Enter the details of students of class " << clas[i] << endl;
            for (j = 0; j < s; j++)
            {
                cout << "Enter name of student " << j + 1 << ": ";
                cin >> name[j];
                cout << "Enter roll number of student " << j + 1 << ": ";
                cin >> roll[j];
                cout << "Enter the number of subjects of student " << j + 1 << ": ";
                cin >> m;
                cout << "Enter subjects of student " << j + 1 << ": " << endl;
                for (int k = 0; k < m; k++)
                {
                    cin >> sub[k];
                }
            }
        }
    }
    void showdata()
    {
        for (i = 0; i < n; i++)
        {
            cout << "Class " << clas[i] << ": " << endl;
            for (j = 0; j < s; j++)
            {
                cout << "Name: " << name[j] << endl;
                cout << "Roll number: " << roll[j] << endl;
                cout << "Number of subjects: " << m << endl;
                cout << "Subjects: " << endl;

            }
        }
    }
    void calculate()
    {
        int w;
        cout << "Enter weightage: ";
        cin >> w;
        tot = tot + w;
        avg = tot / m;
        per = (avg / 100) * s;
        if (per >= 90)
        {
            gpa = 4;
        }
        else if (per >= 80 && per < 90)
        {
            gpa = 3.7;
        }
        else if (per >= 70 && per < 80)
        {
            gpa = 3.3;
        }
        else if (per >= 60 && per < 70)
        {
            gpa = 3;
        }
        else if (per >= 50 && per < 60)
        {
            gpa = 2.7;
        }
        else if (per >= 40 && per < 50)
        {
            gpa = 2.3;
        }
        else
        {
            gpa = 2;
        }
    }
};
class date {
private:
    int dd;
    int mm;
    int yy;
    void rectifydate() {
        if (dd > 30) {
            dd -= 30;
            mm++;
        }
        if (mm > 12) {
            mm -= 12;
            yy;
        }
    }
public:
    date() {
        dd = 12;
        mm = 3;
        yy = 2023;
    }
    void setdate() {
        cout << "enter the date" << endl;
        cin >> dd;
        cout << "enter the month" << endl;
        cin >> mm;
        cout << "enter the year" << endl;
        cin >> yy;
    }
    void setdate(date temp) {
        dd = temp.dd + 15;
        mm = temp.mm;
        yy = temp.yy;
        rectifydate();
    }
    void showdate() {
        cout << dd << endl;
        cout << mm << endl;
        cout << yy << endl;

    }
};
class menu2
{
private:
public:
    void mainmenu();
    void studentmenu();
    void bookmenu();
    void issuebook();
    void returnbook();
};
void menu2::mainmenu()
{
    cout << "**main menu*" << endl;
    cout << "1:student menu" << endl;
    cout << "2:book menu" << endl;
    cout << "3:issue book" << endl;
    cout << "4:return book" << endl;
    cout << "5:exit" << endl;
}
void menu2::studentmenu() {
    cout << "**student menu*" << endl;
    cout << "1:new entry" << endl;
    cout << "2: modify entry" << endl;
    cout << "3:search entry" << endl;
    cout << "4:delete entry" << endl;
    cout << "5:view student details" << endl;
    cout << "6:Go back to previous menu" << endl;
}
void menu2::bookmenu() {
    cout << "**book menu*" << endl;
    cout << "1:new entry" << endl;
    cout << "2: modify entry" << endl;
    cout << "3:search entry" << endl;
    cout << "4:delete entry" << endl;
    cout << "5:view book details" << endl;
    cout << "6:Go back to previous menu" << endl;
}
class bookdata {
public:
    char title[30];
    char author[30];
    char publisher[30];
    int status;
    float price;
    int issuedrollno;
    date issuedate;
    date returndate;
    bookdata() {
        status = 0;
        issuedrollno = -9999;
    }

};
class studentdata {
public:
    int rollno;
    char name[30];
    char address[50];
    char branch[5];
    int status;
    char booktitle[30];
    studentdata() {
        status = 0;
    }
};
class book {
public:
    void inputdetails();
    void modifydetails();
    void searchdetails();
    void deletedetails();
    void viewallbookdetails();
};
void book::inputdetails() {
    fstream ofp;
    ofp.open("bookdatabase.dat", ios::out | ios::binary | ios::app);
    if (!ofp) {
        cerr << "unable to open file" << endl;
        return;
    }
    bookdata book;
    cout << "enter the title" << endl;
    cin >> book.title;
    cout << "enter authors name" << endl;
    cin >> book.author;
    cout << "enter the publishers name" << endl;
    cin >> book.publisher;
    cout << "enter book price" << endl;
    cin >> book.price;
    ofp.write((char*)&book, sizeof(bookdata));
    ofp.close();
}
void book::modifydetails() {
    fstream file;
    file.open("bookdatabase.dat", ios::binary | ios::in | ios::out | ios::ate);
    if (!file)
    {
        cout << "unable to open file" << endl;
        return;
    }
    file.seekg(0, ios::beg);
    bookdata book;
    char title[25];
    cout << "enter title of the book you want to modify" << endl;
    cin >> title;
    while (file.read((char*)&book, sizeof(bookdata)))
    {
        if (strcmp(book.title, title) == 0)
        {
            int position = (1) * sizeof(bookdata);
            file.seekp(position, ios::cur);
            cout << "enter book title";
            cin >> book.title;
            cout << "enter new authors name";
            cin >> book.author;
            cout << "enter new book publisher";
            cin >> book.publisher;
            cout << "enter the new price";
            cin >> book.price;
            cout << "record updated";
            cin.get();
            cin.get();
            return;
        }
    }
    cout << "book not found";
    cin.get();
    cin.get();
    return;
}
void book::searchdetails() {
    fstream file;
    file.open("bookdatabase.dat", ios::in | ios::binary);
    if (!file) {
        cout << "unable to open file" << endl;
        cin.get();
        cin.get();
        return;
    }
    bookdata book;
    char title[30];
    cout << "enter the title of book you want to modify";
    cin >> title;
    while (file.read((char*)&book, sizeof(bookdata)))
    {
        if (strcmp(book.title, title) == 0)
        {
            cout << "book title" << book.title << endl;
            cout << "book author" << book.publisher << endl;
            cout << "book publisher" << book.publisher << endl;
            cout << "book price" << book.price << endl;
            if (book.status == 1)
            {
                cout << "issued satus" << book.issuedrollno << endl;
                cout << "issued date";
                book.issuedate.showdate();
                cout << endl << "return date";
                book.returndate.showdate();
                cout << endl;
            }
            else
            {
                cout << "issued status:none" << endl;
            }
            cin.get();
            cin.get();
            return;
        }
    }
    cout << "book not found" << endl;
    cin.get();
    cin.get();
    return;
}
void book::deletedetails()
{
    fstream file, temp;
    file.open("bookdatabase.dat", ios::binary | ios::in);
    temp.open("temp.dat", ios::binary | ios::out);
    char title[25];
    bookdata book;
    int flag = 0;
    cout << "enter book title to remove";
    cin >> title;
    while (file.read((char*)&book, sizeof(bookdata)))
    {
        if (strcmp(book.title, title) == 0)
        {
            flag++;
            continue;
        }
        temp.write((char*)&book, sizeof(bookdata));
    }
    file.close();
    temp.close();
    remove("bookdatabase.dat");
    rename("temp.dat", "bookdatabase.dat");
    if (flag == 1)
        cout << "record deleted" << endl;
    else
        cout << "record not found" << endl;
    cin.get();
    cin.get();
    return;
}
void book::viewallbookdetails()
{
    fstream file;
    file.open("bookdatabase.dat", ios::binary | ios::in);
    bookdata book;
    int choice = 1;
    while (file.read((char*)&book, sizeof(bookdata)) && choice)
    {
        system("clear");
        cout << "book title" << book.title << endl;
        cout << "book author" << book.publisher << endl;
        cout << "book publisher" << book.publisher << endl;
        cout << "book price" << book.price << endl;
        if (book.status == 1)
        {
            cout << "issued status is" << book.issuedrollno << endl;
            cout << "issued date";
            book.issuedate.showdate();
            cout << endl << "return date";
            book.returndate.showdate();
        }
        else {
            cout << "issued status is none" << endl;
        }
        cout << "press 1 to view the next book else 0";
        cin >> choice;
    }
    cin.get();
    cin.get();
    return;
}
class student
{
public:
    void inputdetails();
    void modifydetails();
    void searchdetails();
    void deletedetails();
    void viewallstudentdetails();
};
void student::inputdetails()
{
    fstream ofp;
    ofp.open("studentdatabase.dat", ios::out | ios::app | ios::binary);
    if (!ofp)
    {
        cerr << "unable to open file" << endl;
        return;
    }
    studentdata student;
    cout << "enter students roll number" << endl;
    cin >> student.rollno;
    cout << "enter students name" << endl;
    cin >> student.name;
    cout << "enter students address" << endl;
    cin >> student.address;
    cout << "enter students branch" << endl;
    cin >> student.branch;
    cout << "record added to database";


    ofp.write((char*)&student, sizeof(studentdata));
    ofp.close();
}
void student::modifydetails()
{
    fstream fp;
    fp.open("studentdatabase.dat", ios::binary | ios::in | ios::out | ios::ate);
    if (!fp)
    {
        cerr << "unable to open file" << endl;
        return;
    }
    fp.seekg(0, ios::beg);
    int target;
    cout << "enter students roll number to modify" << endl;
    cin >> target;
    studentdata student;
    while (fp.read((char*)&student, sizeof(student)))
    {
        if (target == student.rollno)
        {
            int position = (1) * sizeof(studentdata);
            fp.seekp(position, ios::cur);
            cout << "enter new roll number of the student";
            cin >> student.rollno;
            cout << "enter new name of student";
            cin >> student.name;
            cout << "enter students new address";
            cin >> student.address;
            cout << "enter the new branch of the student";
            cin >> student.branch;
            fp.write((char*)&student, sizeof(studentdata));
            fp.close();
            cout << "record updated";
            return;
        }
    }
    cout << "roll number not found" << endl;
    return;
}
void student::searchdetails()
{
    fstream ifp;
    ifp.open("studentdatabase.dat", ios::in | ios::binary);
    if (!ifp) {
        cerr << "unable to open file" << endl;
        return;
    }
    int target;
    cout << "enter the roll number to search";
    cin >> target;
    studentdata student;
    while (ifp.read((char*)&student, sizeof(student)))
    {
        if (target == student.rollno)
        {
            cout << "record found" << endl;

            cout << "student name" << student.name << endl;
            cout << "student roll number" << student.rollno << endl;
            cout << "student branch" << student.branch << endl;
            cout << "student address" << student.address << endl;
            if (student.status == 1)
            {
                cout << "issued book name is" << student.booktitle << endl;

            }
            else
            {
                cout << "no book is issued for this roll number" << endl;
            }
            cin.get();
            cin.get();
            return;

        }
    }
    cout << "record not found" << endl;
    return;
}
void student::viewallstudentdetails()
{
    system("clear");
    fstream ifp;
    ifp.open("studentdatabase.dat", ios::in | ios::binary);
    if (!ifp) {
        cerr << "unable to open file" << endl;
        return;
    }
    studentdata student;
    int choice = 1;
    while (ifp.read((char*)&student, sizeof(student)) && choice)
    {
        system("clear");
        cout << "student name" << student.name << endl;
        cout << "student roll number" << student.rollno << endl;
        cout << "student branch" << student.branch << endl;
        cout << "students address" << student.address << endl;
        if (student.status == 1)
        {
            cout << "issued book nsme " << student.booktitle << endl;
        }
        else {
            cout << "no book is issued for this roll number" << endl;
        }
        cout << "press 1 to view the next book else 0";
        cin >> choice;
    }
    return;
}
void student::deletedetails()
{
    fstream file;
    file.open("studentdatabase.dat", ios::in | ios::binary);
    fstream temp;
    temp.open("temp.dat", ios::out | ios::binary);
    studentdata student;
    int target;
    int flag = 0;
    cout << "enter roll number to delete data";
    cin >> target;
    while (file.read((char*)&student, sizeof(student)))
    {
        if (student.rollno == target)
        {
            flag++;
            continue;
        }
        temp.write((char*)&student, sizeof(student));
    }
    file.close();
    temp.close();
    remove("studentdatabase.dat");
    rename("temp.dat", "studentdatabase.dat");
    if (flag == 1)
        cout << "record deleted" << endl;
    else
        cout << "roll number 	not found" << endl;
    cin.get();
    cin.get();
    return;
}
void menu2::issuebook()
{
    fstream sp, bp;
    sp.open("studentdatabas.dat", ios::in | ios::out | ios::ate | ios::binary);
    bp.open("studentdatabas.dat", ios::in | ios::out | ios::ate | ios::binary);
    bp.seekg(0, ios::beg);
    sp.seekg(0, ios::beg);
    int rollno, flags = 0, flagb = 0, position;
    char title[30];
    studentdata student;
    bookdata book;
    cout << "enter students roll number to issue book" << endl;
    cin >> rollno;
    while (sp.read((char*)&student, sizeof(student)))
    {
        if (student.rollno == rollno)
        {
            position = (1) * sizeof(studentdata);
            sp.seekp(position, ios::cur);
            flags++;
            break;
        }
    }
    if (flags != 1)
    {
        cout << "record not found" << endl;
        cin.get();
        cin.get();
        sp.close();
        bp.close();
        return;
    }
    cout << "enter the book title you want to issue";
    cin >> title;
    while (bp.read((char*)&book, sizeof(bookdata)))
    {
        if (strcmp(book.title, title) == 0)
        {
            position = (1) * sizeof(bookdata);
            bp.seekp(position, ios::cur);
            flagb++;
            break;
        }
    }
    if (flagb != 1)
    {
        cout << "record not found" << endl;
        cin.get();
        cin.get();
        sp.close();
        bp.close();
        return;
        if (student.status != 1 && book.status != 1)
        {
            strcpy(student.booktitle, title);
            student.status = 1;
            book.status = 1;
            book.issuedrollno = student.rollno;
            book.issuedate.setdate();
            book.returndate.setdate(book.issuedate);
            sp.write((char*)&student, sizeof(studentdata));
            bp.write((char*)&book, sizeof(bookdata));
            sp.close();
            bp.close();

        }
        else
        {
            if (student.status == 1)
            {
                cout << "students account is already full" << endl;
                cin.get();
                cin.get();
                sp.close();
                bp.close();
                return;
            }
            else
            {
                cout << "book is already issued" << endl;
                cin.get();
                cin.get();
                sp.close();
                bp.close();
                return;
            }
        }
    }
}
void menu2::returnbook()
{
    fstream sp, bp;
    sp.open("studentdatabas.dat", ios::in | ios::out | ios::ate | ios::binary);
    bp.open("studentdatabas.dat", ios::in | ios::out | ios::ate | ios::binary);
    bp.seekg(0, ios::beg);
    sp.seekg(0, ios::beg);
    int rollno, flags = 0, flagb = 0, position;
    char title[30];
    studentdata student;
    bookdata book;
    cout << "enter student roll number to return book" << endl;
    cin >> rollno;
    while (sp.read((char*)&student, sizeof(student)))
    {
        if (student.rollno == rollno)
        {
            position = (1) * sizeof(studentdata);
            sp.seekp(position, ios::cur);
            flags++;
            break;
        }
    }
    if (flags != 1)
    {
        cout << "record not found" << endl;
        cin.get();
        cin.get();
        sp.close();
        bp.close();
        return;
    }

    while (bp.read((char*)&book, sizeof(bookdata)))
    {
        if (strcmp(book.title, student.booktitle) == 0)
        {
            position = (1) * sizeof(bookdata);
            bp.seekp(position, ios::cur);
            flagb++;
            break;
        }
    }
    if (flagb != 1)
    {
        cout << "record not found" << endl;
        cin.get();
        cin.get();
        sp.close();
        bp.close();
        return;
        if (student.status != 1 && book.status != 1)
        {
            student.status = 0;
            book.status = 0;
            book.issuedrollno = -9999;
            sp.write((char*)&student, sizeof(studentdata));
            bp.write((char*)&book, sizeof(bookdata));
            sp.close();
            bp.close();

        }
        else
        {
            if (student.status == 0)
            {
                cout << "students account is already full" << endl;
                cin.get();
                cin.get();
                sp.close();
                bp.close();
                return;
            }
            else
            {
                cout << "book is already issued" << endl;
                cin.get();
                cin.get();
                sp.close();
                bp.close();
                return;
            }
        }
    }
}
int main()
{
    int day, x, p, q;
    float z;
    int a;
    cout << "************well come to air university*****************" << endl;
    system("pause");
    system("cls");
c:
    cout << "(1) TEACHER PORTAL." << endl;
    cout << "(2) CAFATERIA.     " << endl;
    cout << "(3) STUDENT LIBRARY." << endl;
    cout << "(0) MAIN MENU:" << endl;
    cin >> a;
    system("pause");
    system("cls");
    if (a == 0)
    {
        goto c;
    }
    else if (a == 1)
    {
        cout << "***************       TEACHER PORTAL    **********" << endl;
        cout << "for main menu press 0 other wise press another key" << endl;
        cin >> q;
        if (q == 0)
        {
            system("cls");
            goto c;
        }
        else {
            portal obj;
            obj.showdata();
            obj.calculate();
            return 0;
        }
    }
    else if (a == 2)
    {
        cout << "***************        CAFATERIA         **********" << endl;
        cout << "for main menu press 0 other wise press other key" << endl;
        cin >> q;
        if (q == 0)
        {
            system("cls");
            goto c;
        }
        else {
            cout << "***************        CAFATERIA         **********" << endl;
            system("pause");
            cansel o;
            time_t tim = time(0);
            tm* gottime = gmtime(&tim);
            tm* lt = localtime(&tim);
            char* dt = asctime(gottime);
            day = gottime->tm_wday;
            cout << "  time:" << dt;
            cout << day << endl;
            if (day == 1)
            {
                cout << "monday" << endl;
                cout << "menu:" << endl;
                o.mon();
                system("pause");
                system("cls");
                o.mon_entry();
                o.mon_order();
                system("pause");
                system("cls");
                cout << "total price:" << o.total << endl;
                cout << "to cansel items press 1:" << endl;
                cin >> x;
                if (x == 1)
                {
                    o.mon_cansel();
                    p = o.total - o.newprice;
                    z = (p + (p / 100) * 4);
                    cout << p << endl;
                    cout << "total price including gst" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
                else
                {
                    cout << "thank you:" << endl;
                    z = (o.total + (o.total / 100) * 4);
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
            }
            else if (day == 2)
            {
                cout << "tuesday" << endl;
                cout << "menu:" << endl;
                o.tue();
                system("pause");
                system("cls");
                o.tue_entry();
                o.tue_order();
                system("pause");
                system("cls");
                cout << "total price:" << o.total << endl;
                o.tue_entry();
                cout << endl;
                cout << "to cansel items press 1:\n for bill press 0" << endl;
                cin >> x;
                if (x == 1)
                {
                    o.tue_cansel();
                    p = o.total - o.newprice;
                    z = (p + (p / 100) * 4);
                    cout << p << endl;
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
                else if (x == 0)
                {
                    cout << "thank you:" << endl;
                    z = (o.total + (o.total / 100) * 4);
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
            }
            else if (day == 3)
            {
                cout << "wednesday" << endl;
                cout << "menu:" << endl;
                o.wed();
                system("pause");
                system("cls");
                o.wed_entry();
                o.wed_order();
                system("pause");
                system("cls");
                cout << "total price:" << o.total << endl;
                o.wed_entry();
                cout << endl;
                cout << "to cansel items press 1:\n for bill press 0" << endl;
                cin >> x;
                if (x == 1)
                {
                    o.wed_cansel();
                    p = o.total - o.newprice;
                    z = (p + (p / 100) * 4);
                    cout << p << endl;
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
                else if (x == 0)
                {
                    cout << "thank you:" << endl;
                    z = (o.total + (o.total / 100) * 4);
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
            }
            else if (day == 4)
            {
                cout << "wednesday" << endl;
                cout << "menu:" << endl;
                o.thu();
                system("pause");
                system("cls");
                o.thu_entry();
                o.thu_order();
                system("pause");
                system("cls");
                cout << "total price:" << o.total << endl;
                o.thu_entry();
                cout << endl;
                cout << "to cansel items press 1:\n for bill press 0" << endl;
                cin >> x;
                if (x == 1)
                {
                    o.thu_cansel();
                    p = o.total - o.newprice;
                    z = (p + (p / 100) * 4);
                    cout << p << endl;
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
                else if (x == 0)
                {
                    cout << "thank you:" << endl;
                    z = (o.total + (o.total / 100) * 4);
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
            }
            else if (day == 5)
            {
                cout << "friday" << endl;
                cout << "menu:" << endl;
                o.fri();
                system("pause");
                system("cls");
                o.fri_entry();
                o.fri_order();
                system("pause");
                system("cls");
                cout << "total price:" << o.total << endl;
                o.fri_entry();
                cout << endl;
                cout << "to cansel items press 1:\n for bill press 0" << endl;
                cin >> x;
                if (x == 1)
                {
                    o.fri_cansel();
                    p = o.total - o.newprice;
                    z = (p + (p / 100) * 4);
                    cout << p << endl;
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
                else if (x == 0)
                {
                    cout << "thank you:" << endl;
                    z = (o.total + (o.total / 100) * 4);
                    cout << "total price including gst:" << z << endl;
                    system("pause");
                    system("cls");
                    cout << "total amount:" << z << endl;
                }
            }
            else if (day == 6)
            {
                cout << "SATURDAY" << endl;
                o.sat();
            }
            else if (day == 0)
            {
                cout << "SUNDAY" << endl;
                o.sun();
            }
        }
    }
    else if (a == 3)
    {
        cout << "***************       STUDENT LIBRARY    ***********" << endl;
        system("pause");
        cout << "for main menu press 0 otherwise press any other key" << endl;
        cin >> q;
        if (q == 0)
        {
            system("cls");
            goto c;

        }
        else
        {

            menu2 menu;
            int quit = 0;
            int choice, i;
            while (!quit)
            {
                system("cls");
                menu.mainmenu();
                cout << "please enter your choice" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1: {
                    system("cls");
                    menu.studentmenu();
                    cout << "please enter your choice" << endl;
                    cin >> choice;
                    student s1;
                    switch (choice)
                    {
                    case 1: s1.inputdetails();
                        break;
                    case 2: s1.modifydetails();
                        break;
                    case 3: s1.searchdetails();
                        break;
                    case 4: s1.deletedetails();
                        break;
                    case 5: s1.viewallstudentdetails();
                        break;
                    case 6: break;
                    default: cout << "wrong input recieved";
                    }
                    break;
                }
                case 2: {
                    system("cls");
                    menu.bookmenu();
                    cout << "please enter your choice" << endl;
                    cin >> choice;
                    book b1;
                    switch (choice)
                    {
                    case 1: b1.inputdetails();
                        break;
                    case 2: b1.modifydetails();
                        break;
                    case 3: b1.searchdetails();
                        break;
                    case 4: b1.deletedetails();
                        break;
                    case 5: b1.viewallbookdetails();
                        break;
                    case 6:break;
                    default: cout << "wrong input recieved" << endl;

                    }
                    break;
                }
                case 3: menu.issuebook();
                    break;
                case 4: menu.returnbook();
                    break;
                case 5: quit++;
                    break;
                default: cerr << "please enter correct input" << endl;
                    cin >> choice;
                    i++;
                }

                return 0;
            }
        }
    }
    else
    {
        cout << "wrong entry" << endl;
    }

}