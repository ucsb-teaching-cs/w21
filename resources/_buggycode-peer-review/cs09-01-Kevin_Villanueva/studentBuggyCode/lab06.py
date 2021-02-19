# lab06.py

from Apartment import Apartment

def mergesort(apartmentList):
    if len(apartmentList) > 1:
        mid = len(apartmentList) // 2
        # uses additional space to create the left / right halves
        lefthalf = apartmentList[:mid]
        righthalf = apartmentList[mid:]

        # recursively sort the lefthalf, then righthalf
        mergesort(lefthalf)
        mergesort(righthalf)

        # merge two sorted sublists (left / right halves)
        # into the original list (apartmentList)
        i = 0 # index for lefthalf sublist
        j = 0 # index for righthalf sublist
        k = 0 # index for alist

        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] < righthalf[j] or lefthalf[i] == righthalf[j]:
                apartmentList[k] = lefthalf[i]
                i = i + 1
            else:
                apartmentList[k] = righthalf[j]
                j = j + 1
            k = k + 1

        # put the remaining lefthalf elements (if any) into apartmentList
        while i < len(lefthalf):
            apartmentList[k] = lefthalf[i]
            i = i + 1
            k = k + 1

        # put the remaining righthalf elements (if any) into apartmentList
        while j < len(righthalf):
            apartmentList[k] = righthalf[j]
            j = j + 1
            k = k + 1


def ensureSortedAscending(apartmentList):
    if len(apartmentList) == 1:
            return True
    for i in range(len(apartmentList) - 1): # b/c it's (len - 1) pairs
        if apartmentList[i] > apartmentList[i + 1]:
            return False
    return True
            

def getNthApartment(apartmentList, n):
    if n not in range(len(apartmentList)):
        return "(Apartment) DNE"
    else:
        return apartmentList[n].getApartmentDetails()

    
def getTopThreeApartments(apartmentList):
    mergesort(apartmentList)
    # one element
    if len(apartmentList) == 1:
        return "1st: " + apartmentList[0].getApartmentDetails()
    # two elements
    if len(apartmentList) == 2:
        return "1st: " + apartmentList[0].getApartmentDetails() + "\n" + "2nd: " + apartmentList[1].getApartmentDetails()
    # three elements or more
    if len(apartmentList) >= 3:
        return "1st: " + apartmentList[0].getApartmentDetails() + "\n" + "2nd: " + apartmentList[1].getApartmentDetails() + "\n" + "3rd: " + apartmentList[2].getApartmentDetails()
    
        
	    