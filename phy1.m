clear
clc
close all

function xdot=f(x,t)

  k=1;
  m=1;

  xdot=zeros(2,1);
  xdot(1)=x(2);
  xdot(2)= -(k/m)*x(1);

end

x0=[0;0.1];
 t=linspace(0,20);

x=lsode("f",x0,t);

plot(t,x(:,1),"-r",t,x(:,2),"-b")
legend("x(t)","v(t)","fontsize",14)
xlabel("t(seconds)","fontsize",14)
%%
clear all;
clc;
clf;
[t,x]=ode45(@s,[0 30],[0;0.1]);
plot(t,x(:,1),"-r",t,x(:,2),"-g")
xlabel("Time(Seconds)",FontSize=14)
legend("x(t)","v(t)",FontSize=18)
function dxdt= s(t,x)
c = 1;
m = 1;
l = 1;
dxdt=zeros(2,1);
dxdt=[x(2);(-c*x(2)-l*x(1))/m];
end

clear all;
clc;
clf;
[t,x]=ode45(@k,[0 30],[0;0.1]);
plot(t,x(:,1),"-r",t,x(:,2),"-g")
xlabel("Time(Seconds)",FontSize=18)
legend("x(t)","v(t)",FontSize=12)
function dxdt= k(t,x)
c = 1;
m = 1;
l = 1;
dxdt=zeros(2,1);
dxdt=[x(2);(-c*(x(2))^2-l*(x(1))^3)/m];
end
