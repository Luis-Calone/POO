@echo off

SET EXECUTAVEL = main.exe 
@REM SET MAIN = main.cpp
@REM SET HEADERa = classes/Veiculo.cpp
@REM SET HEADERb = classes/Cliente.cpp
@REM SET HEADERc = classes/Pedidos.cpp

g++ -o %EXECUTAVEL% classes/Veiculo.cpp classes/Cliente.cpp classes/Pedidos.cpp

IF %ERRORLEVEL% EQU 0 (

    echo Feito!
    echo.
    %EXECUTAVEL%
) ELSE (
    echo ERRO!
)

pause