program C04EX05;
var
  N, I, R : integer;
begin
  write('Entre valor numerico: '); readln(N);
  writeln;
  I := 1;
  repeat 
    R := N * I;
    writeln(N:2, ' X ', I:2, ' = ', R:3);
    I := I + 1;
  until (I > 10); 
  writeln;
end.
