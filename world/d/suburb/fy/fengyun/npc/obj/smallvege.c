// by tie@fengyun

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("С�ײ�", ({ "small cabbage" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ��ˮ�����С�ײ�\n");
		set("unit", "��");
		set("value", 15);
		set("food_remaining", 3);
		set("food_supply", 60);
	}
}