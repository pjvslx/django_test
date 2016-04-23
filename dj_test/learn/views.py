#coding:utf-8

from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def index(request):
    return HttpResponse(u"欢迎光临 自强学堂!")

def home(request):
    return render(request, "home.html")

def add(request):
    a = request.GET['a']
    b = request.GET['b']
    a = int(a)
    b = int(b)
    return HttpResponse(str(a+b))

def test(request):
    return render(request, "test.html")