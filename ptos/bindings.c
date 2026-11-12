/* Classic AES wrappers and caller-owned binding state for native pTOS.
 * Moved from pTOS lib/aes. Copyright (C) 2026 the pTOS development team.
 * GPL version 2 or later. */
#include "gem.h"

AESGLOBAL aes_global = { .ap_id = -1 };
short gl_apid = -1, gl_ap_version;

short appl_control(short id, short mode, void *output)
{ return mt_appl_control(id,mode,output,&aes_global); }

short appl_exit(void)
{
    short result = mt_appl_exit(&aes_global);
    if (result) { gl_apid = -1; gl_ap_version = 0; }
    return result;
}

short appl_find(const char *name) { return mt_appl_find(name, &aes_global); }

short appl_getinfo(short type, short *a, short *b, short *c, short *d)
{
    return mt_appl_getinfo(type, a, b, c, d, &aes_global);
}

short appl_init(void)
{
    gl_apid = mt_appl_init(&aes_global);
    gl_ap_version = aes_global.ap_version;
    return gl_apid;
}

short appl_read(short id, short length, void *buffer) { return mt_appl_read(id, length, buffer, &aes_global); }

short appl_search(short mode, char *name, short *type, short *id)
{ return mt_appl_search(mode,name,type,id,&aes_global); }

short appl_write(short id, short length, void *buffer) { return mt_appl_write(id, length, buffer, &aes_global); }

short appl_yield(void) { return mt_appl_yield(&aes_global); }

short evnt_button(short clicks, short mask, short state, short *mx, short *my,
                  short *buttons, short *modifiers)
{
    return mt_evnt_button(clicks, mask, state, mx, my, buttons, modifiers, &aes_global);
}

short evnt_dclick(short rate, short set) { return mt_evnt_dclick(rate, set, &aes_global); }

short evnt_keybd(void) { return mt_evnt_keybd(&aes_global); }

short evnt_mesag(short message[8]) { return mt_evnt_mesag(message, &aes_global); }

short evnt_mouse(short leave, short x, short y, short width, short height,
                 short *mx, short *my, short *buttons, short *modifiers)
{
    return mt_evnt_mouse(leave, x, y, width, height, mx, my, buttons, modifiers, &aes_global);
}

short evnt_multi(short events, short clicks, short button_mask, short button_state,
                 short m1_leave, short m1_x, short m1_y, short m1_w, short m1_h,
                 short m2_leave, short m2_x, short m2_y, short m2_w, short m2_h,
                 short message[], unsigned long interval, short *mx, short *my,
                 short *buttons, short *modifiers, short *key, short *click_count)
{
    return mt_evnt_multi(events, clicks, button_mask, button_state,
                         m1_leave, m1_x, m1_y, m1_w, m1_h, m2_leave, m2_x, m2_y, m2_w, m2_h,
                         message, interval, mx, my, buttons, modifiers, key, click_count, &aes_global);
}

short evnt_timer(unsigned long interval) { return mt_evnt_timer(interval, &aes_global); }

WORD form_alert(WORD button, const char *text) { return mt_form_alert(button,text,&aes_global); }

short form_button(OBJECT *tree, short object, short clicks, short *next)
{
    return mt_form_button(tree,object,clicks,next,&aes_global);
}

short form_center(OBJECT *tree, short *x, short *y, short *w, short *h)
{
    return mt_form_center(tree,x,y,w,h,&aes_global);
}

short form_center_grect(OBJECT *tree, GRECT *rect) { return mt_form_center_grect(tree,rect,&aes_global); }

WORD form_dial(WORD kind, WORD sx, WORD sy, WORD sw, WORD sh, WORD x, WORD y, WORD w, WORD h)
{
    return mt_form_dial(kind,sx,sy,sw,sh,x,y,w,h,&aes_global);
}

WORD form_do(OBJECT *tree, WORD start) { return mt_form_do(tree,start,&aes_global); }

WORD form_error(WORD error) { return mt_form_error(error,&aes_global); }

short form_keybd(OBJECT *tree, short object, short proposed, short key,
                 short *next, short *remaining)
{
    return mt_form_keybd(tree,object,proposed,key,next,remaining,&aes_global);
}

WORD fsel_exinput(char *path, char *selection, WORD *button, const char *title)
{ return mt_fsel_exinput(path,selection,button,title,&aes_global); }

WORD fsel_input(char *path, char *selection, WORD *button)
{ return mt_fsel_input(path,selection,button,&aes_global); }

WORD graf_dragbox(WORD w, WORD h, WORD x, WORD y, WORD bx, WORD by, WORD bw, WORD bh, WORD *rx, WORD *ry)
{ return mt_graf_dragbox(w,h,x,y,bx,by,bw,bh,rx,ry,&aes_global); }

WORD graf_growbox(WORD sx, WORD sy, WORD sw, WORD sh, WORD x, WORD y, WORD w, WORD h)
{ return mt_graf_growbox(sx,sy,sw,sh,x,y,w,h,&aes_global); }

WORD graf_growbox_grect(const GRECT *small, const GRECT *large)
{ return mt_graf_growbox_grect(small,large,&aes_global); }

short graf_handle(short *wchar, short *hchar, short *wbox, short *hbox)
{
    return mt_graf_handle(wchar,hchar,wbox,hbox,&aes_global);
}

WORD graf_mbox(WORD w, WORD h, WORD sx, WORD sy, WORD dx, WORD dy)
{ return mt_graf_mbox(w,h,sx,sy,dx,dy,&aes_global); }

short graf_mkstate(short *mx, short *my, short *buttons, short *modifiers)
{
    return mt_graf_mkstate(mx, my, buttons, modifiers, &aes_global);
}

short graf_mouse(short mode, const MFORM *form) { return mt_graf_mouse(mode,form,&aes_global); }

WORD graf_rubberbox(WORD x, WORD y, WORD wmin, WORD hmin, WORD *w, WORD *h)
{ return mt_graf_rubberbox(x,y,wmin,hmin,w,h,&aes_global); }

WORD graf_shrinkbox(WORD sx, WORD sy, WORD sw, WORD sh, WORD x, WORD y, WORD w, WORD h)
{ return mt_graf_shrinkbox(sx,sy,sw,sh,x,y,w,h,&aes_global); }

WORD graf_shrinkbox_grect(const GRECT *small, const GRECT *large)
{ return mt_graf_shrinkbox_grect(small,large,&aes_global); }

WORD graf_slidebox(OBJECT *tree, WORD parent, WORD object, WORD vertical)
{ return mt_graf_slidebox(tree,parent,object,vertical,&aes_global); }

short graf_watchbox(OBJECT *tree, short object, short in_state, short out_state)
{
    return mt_graf_watchbox(tree,object,in_state,out_state,&aes_global);
}

WORD menu_bar(OBJECT *tree, WORD show) { return mt_menu_bar(tree,show,&aes_global); }

WORD menu_icheck(OBJECT *tree, WORD item, WORD check)
{ return mt_menu_icheck(tree,item,check,&aes_global); }

WORD menu_ienable(OBJECT *tree, WORD item, WORD enable)
{ return mt_menu_ienable(tree,item,enable,&aes_global); }

WORD menu_popup(MENU *menu, WORD x, WORD y, MENU *result)
{ return mt_menu_popup(menu,x,y,result,&aes_global); }

short menu_register(short id, const char *text) { return mt_menu_register(id,text,&aes_global); }

WORD menu_text(OBJECT *tree, WORD item, const char *text)
{ return mt_menu_text(tree,item,text,&aes_global); }

WORD menu_tnormal(OBJECT *tree, WORD item, WORD normal)
{ return mt_menu_tnormal(tree,item,normal,&aes_global); }

short objc_add(OBJECT *tree, short parent, short child)
{ return mt_objc_add(tree,parent,child,&aes_global); }

WORD objc_change(OBJECT *tree, WORD object, WORD reserved, WORD x, WORD y, WORD w, WORD h, WORD state, WORD redraw)
{
    return mt_objc_change(tree,object,reserved,x,y,w,h,state,redraw,&aes_global);
}

short objc_delete(OBJECT *tree, short object)
{ return mt_objc_delete(tree,object,&aes_global); }

WORD objc_draw(OBJECT *tree, WORD start, WORD depth, WORD x, WORD y, WORD w, WORD h)
{
    return mt_objc_draw(tree,start,depth,x,y,w,h,&aes_global);
}

WORD objc_edit(OBJECT *tree, WORD object, WORD key, WORD *index, WORD kind)
{
    return mt_objc_edit(tree,object,key,index,kind,&aes_global);
}

short objc_find(OBJECT *tree, short start, short depth, short mx, short my)
{ return mt_objc_find(tree,start,depth,mx,my,&aes_global); }

short objc_offset(OBJECT *tree, short object, short *x, short *y)
{ return mt_objc_offset(tree,object,x,y,&aes_global); }

short objc_order(OBJECT *tree, short object, short position)
{ return mt_objc_order(tree,object,position,&aes_global); }

WORD objc_sysvar(WORD mode, WORD which, WORD in1, WORD in2, WORD *out1, WORD *out2)
{ return mt_objc_sysvar(mode,which,in1,in2,out1,out2,&aes_global); }

WORD rsrc_free(void) { return mt_rsrc_free(&aes_global); }

WORD rsrc_gaddr(WORD type, WORD index, void *address) { return mt_rsrc_gaddr(type,index,address,&aes_global); }

WORD rsrc_load(const char *name) { return mt_rsrc_load(name,&aes_global); }

short rsrc_obfix(OBJECT *tree, short object) { return mt_rsrc_obfix(tree,object,&aes_global); }

WORD rsrc_rcfix(void *image) { return mt_rsrc_rcfix(image,&aes_global); }

WORD rsrc_saddr(WORD type, WORD index, void *address) { return mt_rsrc_saddr(type,index,address,&aes_global); }

short scrp_read(char *path) { return mt_scrp_read(path,&aes_global); }

short scrp_write(const char *path) { return mt_scrp_write(path,&aes_global); }

WORD shel_envrn(char **result, const char *prefix) { return mt_shel_envrn(result,prefix,&aes_global); }

WORD shel_find(char *path) { return mt_shel_find(path,&aes_global); }

short shel_get(char *buffer, short length) { return mt_shel_get(buffer,length,&aes_global); }

short shel_put(const char *buffer, short length) { return mt_shel_put(buffer,length,&aes_global); }

void shel_rdef(char *command, char *directory) { mt_shel_rdef(command,directory,&aes_global); }

WORD shel_read(char *command, char *tail) { return mt_shel_read(command,tail,&aes_global); }

void shel_wdef(const char *command, const char *directory) { mt_shel_wdef(command,directory,&aes_global); }

WORD shel_write(WORD mode, WORD graphical, WORD execution, const void *command, const char *tail)
{ return mt_shel_write(mode,graphical,execution,command,tail,&aes_global); }

short wind_calc(short type, short kind, short x, short y, short w, short h,
                short *ox, short *oy, short *ow, short *oh)
{
    return mt_wind_calc(type, kind, x, y, w, h, ox, oy, ow, oh, &aes_global);
}

short wind_calc_grect(short type, short kind, const GRECT *in, GRECT *out)
{ return mt_wind_calc_grect(type,kind,in,out,&aes_global); }

short wind_close(short id) { return mt_wind_close(id, &aes_global); }

short wind_create(short kind, short x, short y, short w, short h)
{
    return mt_wind_create(kind, x, y, w, h, &aes_global);
}

short wind_create_grect(short kind, const GRECT *rect)
{ return mt_wind_create_grect(kind,rect,&aes_global); }

short wind_delete(short id) { return mt_wind_delete(id, &aes_global); }

short wind_find(short x, short y) { return mt_wind_find(x,y,&aes_global); }

short wind_get(short id, short field, short *a, short *b, short *c, short *d)
{
    return mt_wind_get(id, field, a, b, c, d, &aes_global);
}

short wind_get_grect(short id, short field, GRECT *rect)
{ return mt_wind_get_grect(id,field,rect,&aes_global); }

short wind_get_int(short id, short field, short *value)
{ return mt_wind_get_int(id,field,value,&aes_global); }

short wind_get_ptr(short id, short field, void **pointer)
{ return mt_wind_get_ptr(id,field,pointer,&aes_global); }

short wind_new(void) { return mt_wind_new(&aes_global); }

short wind_open(short id, short x, short y, short w, short h)
{
    return mt_wind_open(id, x, y, w, h, &aes_global);
}

short wind_open_grect(short id, const GRECT *rect)
{ return mt_wind_open_grect(id,rect,&aes_global); }

short wind_set(short id, short field, short a, short b, short c, short d)
{
    return mt_wind_set(id, field, a, b, c, d, &aes_global);
}

short wind_set_grect(short id, short field, const GRECT *rect)
{ return mt_wind_set_grect(id,field,rect,&aes_global); }

short wind_set_int(short id, short field, short value)
{ return mt_wind_set_int(id,field,value,&aes_global); }

short wind_set_ptr(short id, short field, void *pointer)
{ return mt_wind_set_ptr(id,field,pointer,&aes_global); }

short wind_set_ptr_int(short id, short field, void *pointer, short value)
{ return mt_wind_set_ptr_int(id,field,pointer,value,&aes_global); }

short wind_set_str(short id, short field, const char *text)
{
    return mt_wind_set_str(id,field,text,&aes_global);
}

short wind_update(short code) { return mt_wind_update(code, &aes_global); }
