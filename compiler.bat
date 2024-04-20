@echo off

SET EXECUTAVEL = main.exe 
SET MAIN = main.cpp
SET HEADERa = classes/Veiculo.cpp
SET HEADERb = classes/Cliente.cpp
SET HEADERc = classes/Pedidos.cpp

g++ -o %EXECUTAVEL% %MAIN% %HEADERa% %HEADERb% %HEADERc%

IF %ERRORLEVEL% EQU 0 (

    echo Feito!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo ERRO!
)

pause