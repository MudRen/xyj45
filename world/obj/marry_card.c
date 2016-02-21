// marry_card.c
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("��Լ", ({"marrycard"}) );
        set_weight(10);
        set("no_get",1);
        set("no_drop","��Ļ�Լ���ܶ���,ֻ��ȥ����ׯ�����Լ��\n");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "paper");
        }
}

void init()
{
        add_action("do_coupletalk", "coupletalk");
        add_action("do_coupletalk", "ct");
        add_action("do_cemote", "ce" );
}

int do_cemote(string arg)
{
        object me;
        object couple_ob;
        string target, tmpstr1, tmpstr2,str1,str2;
        string cardname;
        int i;

        me = this_player();
        cardname = present("marrycard")->query("name");

        if (sscanf(cardname,"���%s�Ļ�Լ" ,target)!=1)
                return notify_fail("��û�а���.\n");

        couple_ob = find_player(target);
        if( !couple_ob )
                return
        notify_fail("��İ��������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
        if ((string)couple_ob->query("gender") != "Ů��") {
                tmpstr1 = "����"; tmpstr2 = "�Ϲ�";
                str1 = "��"; str2 = "��";
        } else {
                tmpstr1 = "�Ϲ�"; tmpstr2 = "����";
                str1 = "��"; str2 = "��";
        }

        if (!arg) {
                write( MAG "���������������İ����ˡ�\n" NOR);
                tell_room(environment(me), CYN+(string)me->name()+
                "�����������"+str1+"�İ���"+ (string)couple_ob->name()+
                "�ˡ�\n" +NOR, ({me, couple_ob}));
                tell_object(couple_ob, sprintf(MAG "%s %s 
                ���������������\n"NOR, tmpstr1,me->name(1) )); 

                return 1;
        }
        if (environment(me) == environment(couple_ob ) ) {       
           if (arg == "kiss") {
              write( MAG "��ӵס��İ��£������һ�ǣ�����...����...\n" NOR);
              tell_room(environment(me), CYN+(string)me->name()+
              "ӵס"+(string)couple_ob->name()+"�������һ�ǡ�\n" 
                +NOR, ({me, couple_ob}));
                tell_object(couple_ob, sprintf(MAG "%s %s
                ӵס�㣬�����һ�ǣ�����...����...\n"NOR,tmpstr1,me->name(1) 
));               }         
        }                 

        return 1;
}


int do_coupletalk(string arg)
{
        object me;
        object couple_ob;
        string target, tmpstr1, tmpstr2;
        string cardname;
        int i;

        me = this_player();
        cardname = present("marrycard")->query("name");

        if (sscanf(cardname,"���%s�Ļ�Լ" ,target)!=1)
                return notify_fail("��û�а���.\n");

        couple_ob = find_player(target);
        if( !couple_ob )
                return 
        notify_fail("��İ��������޷������㣬�����Ѿ��뿪��Ϸ�ˡ�\n");
        if ((string)couple_ob->query("gender") != "Ů��") {
                tmpstr1 = "����";
                tmpstr2 = "�Ϲ�";
        } else {
                tmpstr1 = "�Ϲ�";
                tmpstr2 = "����";
        }

        write(sprintf(MAG"���%s %s ˵��%s\n"NOR,
                tmpstr2,couple_ob->name(1), arg ));
        tell_object(couple_ob, sprintf(MAG "%s %s ����˵��%s\n"NOR, 
               tmpstr1,me->name(1), arg ));

        return 1;
}

string query_autoload()
{
        object me;
        object couple_ob;
        string target,cardname;
        int i;

        me = this_player();
        cardname = present("marrycard")->query("name");

        sscanf(cardname,"���%s�Ļ�Լ" ,target);
      
        return target;
}

void autoload(string arg)
{
        int i;
        object couple_ob;
        object me;
        string tmpstr, tmpstr1;

//        me = this_player();
        couple_ob = find_player(arg);
        if (couple_ob){
                if ((string)couple_ob->query("gender") != "Ů��"){
                        tmpstr1 = "�Ϲ�"; 
                        tmpstr = "����";
                } else {
                        tmpstr1 = "����";
                        tmpstr = "�Ϲ�";
                }
                
         write(sprintf( MAG "���%sҲ�������ȥ����...\n"NOR,tmpstr1));
                tell_object(couple_ob ,
                sprintf( MAG "���%s����,��ȥ��...\n" NOR, tmpstr));

//me->name(1)+"("+me->query("id")+")",environment(me))->query("name") ); 
                
                
        }
        set("name","���"+arg+"�Ļ�Լ");

}
