clc
t = linspace(0, 300, 100)
r_t = 4 * (1 - exp(-t / 30))
x_t = 4 * t + 120 *exp(-t / 30)

figure;
%plot x(t)
hold on;
subplot(2,1,1)
plot(t,x_t,'Color','blue')
xlabel('position x(t)');
ylabel('time (t)');
title('position (x)');
grid on
hold on
% plot v(t)
hold on;
subplot(2,1,2)
plot(t,r_t,'Color','red')
xlabel('velocity v(t)');
ylabel('time (t)');
title('velocity (v)');
%%
% Parameters
c = 1;
m = 1;
v0 = 10;
t = linspace(0, 10, 100);

% Velocity function
v = 1 ./ (t + 1/v0);

% Position function
x = log(t + 1/v0) + log(1/v0); % assuming x(0) = 0

% Plotting
figure;

% Velocity plot
subplot(2, 1, 1);
plot(t, v);
xlabel('Time (s)');
ylabel('Velocity (m/s)');
title('Velocity vs Time');
grid on;

% Position plot
subplot(2, 1, 2);
plot(t, x);
xlabel('Time (s)');
ylabel('Position (m)');
title('Position vs Time');
grid on;
%%
F0=1;
lambda=1;
m=1;
t=0:0.01:10;
a=F0/m*sin(lambda*t);
v=-cos(lambda*t)+1;
x=-sin(lambda*t)+t;
figure;

subplot(3,1,1);
plot(t,x)
xlabel('time(s)');
ylabel('position(m)');
title('position x(t)');

subplot(3,1,2);
plot(t,v)
xlabel('time(t)');
ylabel('position(m/s)');
title('position v(t)');

subplot(3,1,3);
plot(t,a)
xlabel('time(t');
ylabel('position(m/s^2)');
title('position a(t)');
%%
clear all;
clc;
close all;

% Define system parameters
m = 1;       % mass
k = 1;       % spring constant
c = 0.2;     % damping coefficient

% Define the system of first-order ODEs
function xdot = f(x, t)
  global m k c
  xdot = zeros(2, 1);
  xdot(1) = x(2);
  xdot(2) = -(c/m) * x(2) - (k/m) * x(1);
end

% Initial conditions
x0 = [0; 0.1];

% Time vector
t = linspace(0, 20, 100);

% Solve the system
global m k c
x = lsode(@f, x0, t);

% Plot results
plot(t, x(:,1), '-r', t, x(:,2), '-b');
legend('x(t)', 'v(t)', 'fontsize', 14);
xlabel('t (seconds)', 'fontsize', 14);
ylabel('Amplitude', 'fontsize', 14);
