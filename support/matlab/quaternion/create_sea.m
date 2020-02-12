function [vcoord,vconnect,vcol]=create_sea()

height = 0.2;

vcoord=[
    % Coast x neg
    -5 -5 0;                % 1
    -2 -5 0;                % 2
    -1 -6 0;                % 3
    -1 -7 0;                % 4
    -1 -15 .1;              % 5
    % Coast x pos
    +5 -5 0;                % 6
    +2 -5 0;                % 7
    +1 -6 0;                % 8
    +1 -7 0;                % 9
    +1 -15 .1;              % 10
    
    % Lighthouse x neg
    -3 -3 0;                % 11
    -2 -3 0;                % 12
    -2 -4 0;                % 13
    -3 -4 0;                % 14
    -3 -3 3;                % 15
    -2 -3 3;                % 16
    -2 -4 3;                % 17
    -3 -4 3;                % 18
    
    % Lighthouse x pos
    3 -3 0;                % 19
    2 -3 0;                % 20
    2 -4 0;                % 21
    3 -4 0;                % 22
    3 -3 3;                % 23
    2 -3 3;                % 24
    2 -4 3;                % 25
    3 -4 3;                % 26
    
    % Boat
    
    -0.5 4.8 0;             % 27
    +0.5 4.8 0;             % 28
    +0.5 5.2 0;             % 29
    -0.5 5.2 0;             % 30
    -.7 5 .5;               % 31
    +.7 5 .5;               % 32
    
    ];


vconnect = [
    % Coast 
    1 2;
    2 3;
    3 4;
    4 5;
    6 7;
    7 8;
    8 9;
    9 10;
    % Lighthouse x neg
    11 12;
    12 13;
    13 14;
    14 11;
    15 16;
    16 17;
    17 18;
    18 15;
    11 15;
    12 16;
    13 17;
    14 18;
    % Lighthouse x pos
    19 20;
    20 21;
    21 22;
    22 19;
    23 24;
    24 25;
    25 26;
    26 23;
    19 23;
    20 24;
    21 25;
    22 26;
    % Boat
    27 28;
    28 29;
    29 30;
    30 27;    
    27 31;
    30 31;
    28 32;
    29 32;    
    ];

vcol=[
    % Coast
    'b';
    'b';
    'b';
    'b';
    'b';    
    'b';
    'b';
    'b';
    % Lighthouse x neg
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    'r';
    % Lighthouse x pos
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    'g';
    % Boat
    'k';
    'k';
    'k';
    'k';
    'k';
    'k';
    'k';
    'k';
    ];

