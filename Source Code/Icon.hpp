﻿//   Được lập trình bởi Harding Adonis
//   File Icon.hpp
//   Ngày tạo: 08/06/2018

#ifndef _Icon_HPP_
#define _Icon_HPP_

static const struct {
    unsigned int 	 width;
    unsigned int 	 height;
    unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */
    unsigned char	 pixel_data[32 * 32 * 4 + 1];
} icon = {
  32, 32, 4,
  "\000\000\000\000\010\000\000\000?\000\000\000\232\000\000\001\240\000\000\001\216\000\000\001\247\000\000\000L\000\000\000("
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000M\000\000\000\036\000\000\000!\000\000\000f\000\000\000\210\000\000\000\256\000\000\001"
  "\325\000\000\001\355\000\000\001\276\000\000\001z\000\000\001,\000\000\000\000\000\000\000\202\000\000\001\314\000\000\001"
  "\335\000\000\001\344\000\000\002\327\000\000\002\331\000\000\002\337\000\000\002\340\000\000\001\313\000\000\001\227"
  "\000\000\001'\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000B\000\000\000b\000\000\000\276\000\000\001\336\000\000\001\345\000\000\002\353\000\000\002\354\000"
  "\000\002\347\000\000\002\355\000\000\002\350\000\000\002\337\000\000\001\301\000\000\001\351\000\000\001\327\000\000"
  "\002\325\007\006\003\326\032\026\004\314\037\035\004\310\040\037\004\326\034\031\004\327\016\014\003"
  "\326\002\001\003\353\000\000\002\332\000\000\001\224\000\000\001\036\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\060\000\000\000\273\000\000\001\353\000\000\001\347\000\000\002\335\005\005\003"
  "\330\025\025\004\332\035\035\004\333\040\040\005\334!!\005\333\035\035\004\335\020\020\004\336"
  "\000\000\003\356\000\000\002\331\001\000\003\315\033\030\004\317(&\006\321''\007\333&%\010\342&%\010"
  "\323&&\010\322'&\007\324$\"\006\320\034\032\004\322\006\006\003\346\000\000\002\327\000\000\001i\000\000"
  "\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000z\000\000\001\341\000\000\001\347\000\000\002\317\005\005\003\331"
  "\032\032\005\327\"\"\006\331&&\010\334##\011\337$$\011\340$$\011\332##\010\331''\007\327"
  "!\037\005\332\012\007\003\316\037\036\005\317('\010\323\040\040\012\322\"\040\014\326%$\016"
  "\330'&\016\326%$\016\331\"!\014\323!!\012\324''\010\321'$\006\322\024\017\004\334\000"
  "\000\002\363\000\000\001\231\000\000\001,\000\000\000.\000\000\000\245\000\000\001\365\000\000\001\336\000\000\002\327"
  "\022\022\004\335$$\006\340%%\011\331\037\037\013\336!!\015\335%%\017\330&&\020\333&&\020"
  "\334$$\016\334\040\040\013\332##\011\330'%\005\321%%\007\323\"!\013\323&%\017\324&%"
  "\023\325''\026\323&&\027\322&&\027\326''\024\326%%\021\326$\"\016\324\"!\013\325"
  "(&\010\327\036\034\005\323\004\004\003\356\000\000\001\345\000\000\001\354\000\000\001\354\000\000\001\327\004"
  "\004\003\327\035\035\005\334&&\010\334\040\040\013\335##\017\333$$\022\334%%\026\332&%\030"
  "\332%%\031\332%%\030\333%%\025\331%%\021\330##\015\335\040\040\010\325\037\037\012\322"
  "&%\020\327'%\024\325''\025\324('\026\325((\032\326''\037\324&&\036\325&&\032\324"
  "$$\026\326$%\021\324#\"\015\330&%\011\326#\"\005\322\007\007\003\333\000\000\002\341\000\000\002"
  "\331\007\007\003\333\"\"\006\335%%\011\336!!\015\332$$\021\330$$\027\331$$\034\332%%\040"
  "\333''\040\333((\032\330('\025\331''\023\331&&\024\330%%\022\332\040\040\013\325$"
  "$\014\327%%\023\326'&\034\326\"!B\327\036\035X\330\040\037P\323'&+\324('#\325'%"
  "&\325&%\040\326&%\031\326&%\023\327%$\016\325##\011\324&'\006\334\035\024\004\334\034"
  "\023\004\325&'\006\332##\011\335$$\016\333%%\024\334%%\032\331%%!\332%%'\331''$\335"
  "%%\065\347\032\032f\354\023\023\203\347\030\030e\337!!\065\334&%\023\334%%\015\326"
  "%%\016\325&&\020\316\032\026q\361\004\002\361\371\001\000\374\364\004\003\360\346\014\011\313"
  "\325\"\040R\324)((\327'&'\326'&!\324&&\034\325&&\025\324%$\016\325!\040\012\325"
  "%$\010\326&%\007\327\040\040\011\331%%\016\331%%\025\332&&\034\332&&\"\331&&*\331"
  "(()\343\035\035a\372\005\005\332\374\004\004\344\376\001\001\363\377\000\000\372\360\020\020"
  "\210\334$#\031\332$$\016\326$#\017\324'&\032\321&%(\331\034\032n\351\012\007\330\321"
  "$\"U\334\033\030\212\352\010\006\342\334\031\027\206\313#\040Q\322%#=\325'&#\326"
  "'&\035\327'&\025\326$$\017\330##\014\331##\014\330$$\017\331&&\025\331%%\035\331"
  "&&$\336\"\">\347\030\030p\354\024\024\221\372\006\006\336\345\033\033{\333%%A\366\012"
  "\012\302\347\030\030s\331''\033\333'&\034\332$$\021\330%%\020\324''\033\325''#\322"
  "('.\345\013\010\325\331\037\035t\323,+\070\325$\"b\345\015\013\315\342\015\012\312"
  "\334\025\023\234\324)()\326'&'\327'&\035\331%%\027\327$$\023\327$$\022\330%%\026"
  "\332&&\035\331'&&\330(('\354\023\023\221\370\007\007\324\365\012\012\312\335$$Z\326"
  "*+>\340!!`\374\004\004\341\336##C\332&&&\331&&\035\333&&\021\325%#\017\324&&\033"
  "\324'''\322*))\344\021\017\257\342\027\027\232\321,+B\317*(O\316'%[\370\004\003\364"
  "\356\013\012\315\323*)\061\325('\060\327'&(\327&%\040\330&%\034\330&%\034\330&%"
  "\040\331&&(\331&&\062\330*)\060\360\017\017\261\377\000\000\377\341\037\037r\337\"\""
  "i\332'&T\345\033\033\202\371\007\007\325\333''\063\333&&)\332&&\035\332%%\021\324"
  "%$\017\324'&\032\325'&'\324*)(\341\026\025\226\344\020\016\275\343\023\021\265\354"
  "\007\005\347\347\014\011\325\367\004\003\363\345\023\022\260\327$#[\325'%B\326('/\326"
  "&%-\330'&'\330'&'\330&&,\331'&\064\330))\065\330$#W\346\027\026\225\376\001\001\367"
  "\373\004\004\347\376\001\001\366\373\005\005\346\364\014\014\305\363\015\015\264\330))+\332"
  "&&)\332&&\034\332%%\020\323%%\015\323%%\030\324'&#\323('/\346\020\017\263\372\000"
  "\000\377\352\015\013\317\335\030\026\246\331\032\030\240\356\007\006\352\325#!t\343\027"
  "\025\240\357\014\012\307\330$#P\327''\066\330''\066\330''\066\331&&:\330((<\340"
  "\035\034|\362\007\005\344\335\037\035\202\367\011\011\331\342\035\035\211\340\040\040~"
  "\354\024\024\251\376\001\001\370\372\006\006\330\336##E\332&&\"\333$$\031\331$$\016\323"
  "#!\013\326&&\025\325('\032\324\040\036V\341\015\013\310\356\006\005\351\323\"\040x\323"
  ",,R\323'&m\354\013\011\336\325'&l\340\034\033\220\364\006\005\354\350\020\017\267\325"
  "((C\330''E\330''E\327('F\333#\"b\357\012\010\330\360\011\006\342\333#\"z\370\010"
  "\010\340\342\036\035\217\325,,Y\340!!t\372\005\005\336\357\021\021\241\352\026\026t"
  "\333&&\034\334%%\026\333##\014\324\037\036\011\325%$\022\326&%\034\323&$\060\320)"
  "(.\326\036\034x\347\014\011\327\321*)[\347\021\017\304\370\001\000\377\323#!\205\332"
  "\"!\200\350\020\015\304\350\017\015\306\335\040\037z\327((Q\330''V\326))Q\345\025"
  "\024\253\347\022\017\277\350\022\021\276\333%$~\376\002\002\370\373\004\004\356\333&&"
  "k\365\013\012\320\350\030\030\207\327***\334%%.\334%%\037\333##\023\333\037\037\012"
  "\326##\007\327$#\017\327'%\030\326'%#\325'&\063\322)(=\344\016\014\307\330\032\027"
  "\244\360\010\007\350\342\021\015\317\334\026\024\272\317,+e\344\027\025\257\373\001"
  "\000\375\347\025\024\257\324,+W\327*)_\326((f\363\011\010\340\370\003\002\371\333\""
  "!\213\350\030\030\252\362\015\015\315\365\012\012\332\357\020\020\271\365\013\013\314"
  "\332&&F\332%%\066\333$$&\334$$\032\332##\017\330\"\"\010\322((\006\326!\040\013\325"
  "&$\024\324%%\037\325&&.\324)(\065\333\035\034}\356\003\001\373\341\024\022\271\322#"
  "!\207\344\017\014\325\315!\036\230\325(&|\362\013\012\335\370\005\004\360\334\037\035"
  "\224\335\037\035\223\341\031\030\251\377\000\000\377\345\027\026\266\341\037\037\227"
  "\365\013\013\332\350\030\030\252\350\030\030\247\377\000\000\373\351\027\027\221\330"
  "((\071\332%%\060\330%$!\331##\025\334\040\040\014\332&&\006\307\025\025\004\325&$\011"
  "\323$\"\020\322%$\032\324&&'\327'&\063\324&$Q\366\004\003\361\363\006\005\354\350\012"
  "\010\343\361\005\003\365\357\007\006\353\324(&\200\336\036\035\237\376\000\000\377\371\000"
  "\000\377\370\000\000\377\373\000\000\377\361\012\011\342\327((\200\370\007\007\344\374\003"
  "\003\363\371\005\005\350\375\003\003\362\377\000\000\375\337!!`\330'&\066\331%%*\327%%\033"
  "\332#\"\020\341##\011\335\031\031\004\317\005\005\002\317%$\006\326\"!\014\326'$\024\325"
  "&%\040\325'&-\323&%C\353\011\007\336\342\025\023\255\331\035\032\230\340\023\021\303"
  "\363\006\004\361\330\035\035\247\354\016\017\327\367\000\002\377\351\013\017\342\345\017"
  "\022\326\361\005\010\363\365\004\004\373\344\025\026\303\366\011\010\341\343\031\030\254"
  "\363\011\010\337\364\005\003\355\370\005\004\350\340\040\040^\331&&-\330%%\"\330%%\026"
  "\332\"!\015\325##\007\326\004\004\003\317\000\000\002\322\030\024\004\321%%\011\323%#\020\325"
  "&%\032\326'&\"\327\"!O\336\024\021\257\336\034\032\207\362\011\010\336\350\021\016"
  "\304\352\007\006\360\366\001\002\377\356\012\012\343\331\037\037\237\323'(\204\325$%"
  "\220\323'(\205\344\025\027\274\367\002\004\374\364\004\005\365\372\002\002\370\363\010\007"
  "\337\326$#h\350\025\024\230\343\035\035a\331''#\331$$\034\331\"\"\021\327$$\011"
  "\327\027\027\005\340\000\000\002\350\000\000\001\325\006\005\003\317$#\006\324#\"\014\324&%\024\326"
  "'%\033\325%#\071\316#\037[\337\035\033u\357\014\013\307\341\021\017\304\365\002\003\374"
  "\352\015\015\326\320++e\333!!\220\354\012\015\341\352\013\015\334\346\021\024\311"
  "\322+,i\330!\"\215\373\000\001\377\371\000\001\377\356\012\010\331\327&$R\334%%B\335"
  "#\";\330&&\036\331$$\025\333\"!\014\331##\006\334\007\007\003\351\000\000\001{\000\000\001\347\000"
  "\000\002\317\026\025\004\325&%\010\325$#\016\324&%\027\325''\037\326('(\325)(\060\324"
  "('>\326$$\\\347\022\023\264\362\006\007\355\333\035\037\222\355\013\015\326\341\024"
  "\027\267\333\031\034\250\354\013\015\331\342\027\031\253\347\021\023\303\362\007\010"
  "\345\333\034\035\207\330%$T\330&&>\330''.\331''!\330%%\030\327##\017\331$#\011"
  "\332\026\027\004\351\000\000\002\221\000\000\001\023\000\000\000\322\000\000\001\331\002\001\003\335#!\006\331"
  "$$\012\325'$\017\324&%\027\326&%\040\327'%)\327&&\063\327''\071\325))<\333\034\036"
  "}\361\007\012\336\357\006\011\353\342\017\023\304\366\004\006\357\342\024\026\260\367\003"
  "\005\363\346\020\023\267\326&'Q\327))\070\330''\065\330&&-\330&&#\332&&\031\330"
  "'&\021\331##\012\325!!\006\337\002\002\003\335\000\000\001\033\000\000\000\000\000\000\000a\000\000\000\363\000"
  "\000\002\316\010\007\003\320&&\006\326$$\012\327%$\017\326&%\025\326&%\035\326%%$\327&&"
  ",\327&&\063\326((\063\325''@\330\036!m\326\"$a\326#%_\325\037\"p\327#$X\325)"
  ")\066\326'(\064\330&&\061\330&&(\331&&\040\331%%\030\331%%\021\331$$\013\326)(\006"
  "\331\013\013\004\357\000\000\002l\000\000\000\000\000\000\000\000\000\000\000\006\000\000\000\255\000\000\001\332\000\000\002"
  "\313\013\012\004\325'%\006\326$#\012\326#\"\016\327%%\022\325%%\030\326%%\037\327&&"
  "$\326&'*\327&'-\326()+\327()\060\327))/\327()-\326((,\327&',\326&&'\330&&"
  "\"\331%&\033\332%%\025\330#$\017\331\"#\013\331'&\006\330\017\017\004\362\000\000\002\274"
  "\000\000\001\011\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\025\000\000\000\276\000\000\001\357\000\000\002\324"
  "\011\007\003\324\036\036\005\323&&\010\325\040!\013\327##\017\326%%\023\325%%\030\327%&"
  "\034\327''\037\326&'\"\327')$\327))$\326'($\327''!\327&&\036\327&&\032\331&&"
  "\025\332$&\021\326\040\"\015\325$%\011\325\"#\006\327\012\012\004\356\000\000\002\317\000\000"
  "\001+\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\017\000\000\000\227\000\000\001\362"
  "\000\000\001\334\000\000\002\327\023\021\004\327%\040\006\325&'\010\331\"\"\013\324##\016\327%"
  "%\021\330''\023\324'(\025\327''\026\330''\026\327'(\026\325'(\024\327%&\022\324$"
  "%\017\326!\"\014\325#$\011\330')\007\326\030\032\004\331\004\005\003\363\000\000\002\247\000\000\001"
  "\026\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "[\000\000\000\323\000\000\001\360\000\000\002\333\003\002\003\320\027\027\004\324\"\"\005\327''\007\330&"
  "&\011\327%%\013\325\"#\014\325##\015\325#\"\015\326##\015\326$$\014\326$&\012\325"
  "&'\010\323$$\006\314\033\035\005\333\014\017\003\351\000\000\002\331\000\000\001x\000\000\001\003\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000r\000\000\000\240\000\000\000\300\000\000\001\352\000\000\002\334\001\001\002\326\020\020\003\320\034"
  "\034\004\317\036\036\005\325%%\006\334'(\006\330(*\006\333((\006\320\040\"\006\323\033\035\005"
  "\324\025\027\004\325\007\007\003\347\000\000\002\325\000\000\001\303\000\000\001/\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\005\000\000\000t\000\000\000?\000\000\000\061\000\000\000\203\000\000\000\306\000\000\001\331\000\000\001\340\000\000\002"
  "\345\000\000\002\332\004\004\002\323\007\010\003\321\012\015\003\325\006\006\003\337\001\002\002\353\000\000\002"
  "\334\000\000\002\315\000\000\001\227\000\000\001&\000\000\000_\000\000\000\030\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\005\000"
  "\000\000u\000\000\000K\000\000\000\060\000\000\000\065\000\000\000\070\000\000\000l\000\000\000\214\000\000\000\277\000\000\001"
  "\326\000\000\001\316\000\000\001\305\000\000\001\337\000\000\001\301\000\000\001\220\000\000\001Y\000\000\000)\000\000"
  "\000\000\000\000\000\000\000\000\000j\000\000\000\035\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000",
};

#endif  //  _Icon_HPP_