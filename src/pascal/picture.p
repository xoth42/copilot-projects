// Language: Pascal
// print a picture

program pascal_picture;

uses crt;

const
  pic_width = 50;
  pic_height = 10;

var
  pic : array[1..pic_height,1..pic_width] of char;
  i, j : integer;

begin
  clrscr;
  for i := 1 to pic_height do
  begin
    for j := 1 to pic_width do
    begin
      if (i = 1) or (i = pic_height) or (j = 1) or (j = pic_width) then
        pic[i,j] := '*'
      else
      pic[i,j] := chr(random(26) + ord('A'));
    end;
       

  end;
  for i := 1 to pic_height do
  begin
    for j := 1 to pic_width do
      write(pic[i,j]);
    writeln;
  end;
  readln;
end.