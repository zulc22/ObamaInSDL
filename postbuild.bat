@echo off
cd /d %~dp0
set OutDir=%1

xcopy /e/y assets\* %OutDir%