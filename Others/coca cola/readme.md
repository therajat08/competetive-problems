Cool Drink: Kenny loves Coca Cola. 
• There are 'n' different shops in his colony from which he can buy coca cola. 
• Each shop has different rate for the same coca cola bottle. 
• Kenny decided to buy his favorite cool drink for 'm' continuous days. 
• Each day Kenny has 'p' money in his hand. Find out, from how many shops, Kenny 
  can buy his favorite cool drink each day. 
  Prototype: int[] findTotalShops(int inputl, into input2, int input3, into input4) 
  inputl — Total No. of shops in the colony 
  input2 Rate of cool drink in each shop 
  input3 No. of days, Kenny is going to buy the cool drink 
  input4 — Total money, Kenny has with him to buy cool drink, each day 
  output — No. of shops, in which, Kenny can buy cool drink, each day outputl 
  
  Example: inputl — 5 (There are 5 shops in the colony) 
           input2 - {3, 10, 8, 6, 11} (Price of cool drink in each shop) 
           input3 — 4 (Kenny decided to buy cool drink for 4 days) 
           input4 — {1, 10, 3, 11} (Money available with Kenny, each day) • 
           On Dayl: Kenny has only RSI with him, so he cannot buy cool drink from any shop. 
           • On Day2: Kenny has Rs10 with him, so he can buy cool drink from either shop 1 or 2 or 3 or 4.
           
           So output is {0,4,1,5}
