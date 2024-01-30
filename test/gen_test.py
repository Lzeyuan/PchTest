#! /usr/bin/env python
#coding=utf-8

from string import Template

def write_to_file(file_name:str, content:list) :
    file_name = file_name
    class_file = open(file_name, 'w')
    class_file.writelines(content)
    class_file.close()

def create_cpp_file(file_name:str, index:int):
    mycode = []

    # 加载模板文件
    template_file = open('cpp.template', 'r')
    emplate = Template(template_file.read())

    # 模板替换
    mycode.append(emplate.substitute(
        NAMESPACE = chr(ord('A') + index),
        INDEX = str(index + 1)
    ))

    # 将代码写入.h文件
    file_name = file_name + str(index + 1) + ".cpp"
    write_to_file(file_name, mycode)

def create_header_file(file_name:str, index:int):
    mycode = []

    # 加载模板文件
    template_file = open('header.template', 'r')
    emplate = Template(template_file.read())

    # 模板替换
    mycode.append(emplate.substitute(
        NAMESPACE = chr(ord('A') + index)
    ))

    # 将代码写入.h文件
    file_name = file_name + str(index + 1) + ".h"
    write_to_file(file_name, mycode)


if __name__ == '__main__':
    for i in range(26):
        create_header_file("test", i)
        create_cpp_file("test", i)
