# testFile.py

#import pytest

from Apartment import Apartment
from lab06 import *


def test_ApartmentConstructor():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(700, 350, "bad")
    a3 = Apartment(0, 390, "excellent")
    a4 = Apartment(1600, 289)
    a5 = Apartment()
    a6 = Apartment(1200, 200) 
    a7 = Apartment(1200, condition = "bad") 
    assert a0.rent == 1806
    assert a1.rent == 1502
    assert a2.rent == 700
    assert a3.rent == 0
    assert a4.rent == 1600
    assert a5.rent == 0
    assert a6.rent == 1200
    assert a7.rent == 1200

    assert a0.metersFromUCSB == 255
    assert a1.metersFromUCSB == 280
    assert a2.metersFromUCSB == 350
    assert a3.metersFromUCSB == 390
    assert a4.metersFromUCSB == 289
    assert a5.metersFromUCSB == 0
    assert a6.metersFromUCSB == 200
    assert a7.metersFromUCSB == 0

    assert a0.condition == "excellent"
    assert a1.condition == "average"
    assert a2.condition == "bad"
    assert a3.condition == "excellent"
    assert a4.condition == "N/A"
    assert a5.condition == "N/A"
    assert a6.condition == "N/A"
    assert a7.condition == "bad"



def test_getRent():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(700, 350, "bad")
    a3 = Apartment()
    a4 = Apartment(1200, 200)
    assert a0.getRent() == 1806
    assert a1.getRent() == 1502
    assert a2.getRent() == 700
    assert a3.getRent() == 0
    assert a4.getRent() == 1200
    

def test_getMetersFromUCSB():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(700, 350, "bad")
    a3 = Apartment()
    a4 = Apartment(1200, 200)
    assert a0.getMetersFromUCSB() == 255
    assert a1.getMetersFromUCSB() == 280
    assert a2.getMetersFromUCSB() == 350
    assert a3.getMetersFromUCSB() == 0
    assert a4.getMetersFromUCSB() == 200


def test_getCondition():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(700, 350, "bad")
    a3 = Apartment()
    a4 = Apartment(1200, 200)
    assert a0.getCondition() == "excellent"
    assert a1.getCondition() == "average"
    assert a2.getCondition() == "bad"
    assert a3.getCondition() == "N/A"
    assert a4.getCondition() == "N/A"


def test_getApartmentDetails():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(700, 350, "bad")
    a3 = Apartment()
    a4 = Apartment(1200, 200)
    a5 = Apartment(1200, condition = "bad") 
    assert a0.getApartmentDetails() == '(Apartment) Rent: $1806, Distance From UCSB: 255m, Condition: excellent'
    assert a1.getApartmentDetails() == '(Apartment) Rent: $1502, Distance From UCSB: 280m, Condition: average'
    assert a2.getApartmentDetails() == '(Apartment) Rent: $700, Distance From UCSB: 350m, Condition: bad'
    assert a3.getApartmentDetails() == '(Apartment) Rent: $0, Distance From UCSB: 0m, Condition: N/A'
    assert a4.getApartmentDetails() == '(Apartment) Rent: $1200, Distance From UCSB: 200m, Condition: N/A'
    assert a5.getApartmentDetails() == '(Apartment) Rent: $1200, Distance From UCSB: 0m, Condition: bad'

    
def test_lessThanOperator():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment()

    #Error here, needs parenthesis 
    #AttributeError: 'bool' object has no attribute 'rent'
        #Problem is that it evaluates the equality operator first
    assert a1 < a0 == True 

    assert (a1 < a2) == True
    assert (a3 < a4) == True
    assert (a2 < a4) == False
    assert (a5 < a4) == True


def test_greaterThanOperator():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment(700, 200, "bad")
    a6 = Apartment()
    assert (a1 > a0) == False
    assert (a1 > a2) == False
    assert (a1 > a3) == True
    assert (a4 > a6) == True
    assert (a4 > a5) == False 


def test_equalToOperator():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment(700, 200, "bad")
    a6 = Apartment()
    assert (a4 == a5) == True 
    assert (a3 == a5) == False
    assert (a0 == a2) == False
    assert (a2 == a3) == False
    assert (a5 == a6) == False

    

def test_mergesort():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment(700, 200, "average")
    listOfApartments = [a0, a1, a2, a3, a4, a5]
    apartments = []      
    
    assert ensureSortedAscending(listOfApartments) == False 
    mergesort(listOfApartments)
    assert ensureSortedAscending(listOfApartments) == True 
    assert ensureSortedAscending(apartments) == True
    mergesort(apartments)
    assert ensureSortedAscending(apartments) == True
    
    
    
def test_getNthApartment():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment(700, 200, "bad")
    listOfApartments = [a0, a1, a2, a3, a4, a5]
    assert getNthApartment(listOfApartments, 0) == '(Apartment) Rent: $1806, Distance From UCSB: 255m, Condition: excellent'
    assert getNthApartment(listOfApartments, 2) == '(Apartment) Rent: $1502, Distance From UCSB: 350m, Condition: bad'
    assert getNthApartment(listOfApartments, 7) == '(Apartment) DNE'

def test_getTopThreeApartments():
    a0 = Apartment(1806, 255, "excellent")
    a1 = Apartment(1502, 280, "average")
    a2 = Apartment(1502, 350, "bad")
    a3 = Apartment(700, 200, "excellent")
    a4 = Apartment(700, 200, "bad")
    a5 = Apartment(700, 200, "bad")
    listOfApartments = [a0, a1, a2, a3, a4, a5]
    assert getTopThreeApartments(listOfApartments)  == \
           '1st: (Apartment) Rent: $700, Distance From UCSB: 200m, Condition: excellent\n2nd: (Apartment) Rent: $700, Distance From UCSB: 200m, Condition: bad\n3rd: (Apartment) Rent: $700, Distance From UCSB: 200m, Condition: bad'



# test_ApartmentConstructor()
# test_getRent()
# test_getMetersFromUCSB()
# test_getCondition()
# test_getApartmentDetails()

test_lessThanOperator()

# test_greaterThanOperator()
# test_equalToOperator()
# test_mergesort()
# test_getNthApartment()
# test_getTopThreeApartments()
