%% Generacja liczb pseudolosowych - pierwszy program w Matlabie
% Generacja liczb pseudolosowych o rozkładzie normalnym i rysowanie histogramu
%
% Autor: Kamil Kopczyk
% Data: 13.10.2024

clear all; close all; clc
%%  Generacja liczb pseudolosowych

N = 2000;

x = randn(N,2);
%% Histogram
% Wyświetlanie komentarzu
histogram(x,60)         % K = 60 - liczba przedziału histogramu.
title("Histogram liczb pseudolosowy");
xlabel("Wartość zmiennej losowej [-]");
ylabel("Liczność [-]");
grid on;

%% -- skrypt demonstracyjny

clear; clc;  format short g;

x = 1:2e-2:15;

fun = @(u) 2*u .* sin(3*u);

plot(x, fun(x)); grid on;

%%
clear; clc; format short g;

tab = zeros(3,20);

for k = 1:1:max(size(tab))

    tab(2, k) = k;
    tab(3, k) = 2*k;


end

%% petla while

i = 1;

while i <= 30
    
    if i<=20 && i >= 10
    disp(i)
    end
    i = i+i;

end