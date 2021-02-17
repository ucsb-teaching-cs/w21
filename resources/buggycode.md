---
layout: default
title: Buggy Code Peer Review
parent: Resources
nav_order: 8
---

# Peer-reviewed tutoring
{: .no_toc }

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}
In preparation for the 1-on-1 observations, we will practice assisting students with real debugging problems and get feedback on your tutoring.

## What are we practicing?

* Being welcoming, encouraging, and mindful of your tone and body language
* Giving students the appropriate level of help
* Helping students pick up cool debugging strategies
* Use of visualizations, explanations and other techniques when appropriate
* Managing your time (rule of thumb is to keep your interaction under 10 minutes, although depends on the context)

## Prior to class

Students submit 
* The hardest questions they were asked so far related to concepts and code
* Buggy student code prior to the class. They can either create their own example or use a student's example (redact any student-specific information)


### Bringing your fork up to date with the main repo 

Before you begin updating _your fork_ with the files requested in this assignment, let's make sure that your fork is up-to-date with the main website branch (also referred to as `master`, `upstream master`).

* On GitHub, in the list of your repos, find the fork of this repo (you forked it before to add your bio). You can also find it by going to this website's main repo and clicking on the number next to the "Fork" button.
* On your fork's GitHub page, you should see the message "This branch is N commits behind usb-teaching-cs:master". Next to it is the "Compare" button that you need to click.
* You'll want to pull the changes from the main website's repo to your fork repo, so when you click the "Compare" button, you need to click the link "switching the base" (it's underneath the message "There isn't anything to compare").
* After you switch the base, you should see the commits that are in the main repo that are missing from yours. If you see the green "Able to merge" note, then click on the green "Create pull request" button.
* This pull request is for merging the changes in the main repo, which happened since your last commit, into _your_ fork, so you will need to approve/merge this PR yourself in order to bring your repo up to speed with the main repo. Click on "Merge pull request" to complete the merging.

### Submitting your changes as a Pull Request (PR)

You should now be all set to add the files requested in this assignment and then issue a PR like you did when you submitted your bio in order to request for these changes to be added to the main repo.

Follow the instructions in the README that's in the `resources/_buggycode-peer-review/csXX-NN-NetID` directory.


-----
## Structure of the session

Experienced tutors from multiple courses are invited to observe their peers tutoring to provide appropriate feedback. 

In class we'll have mini mock tutoring sessions. At the end of each session, all participants write short reflections and the experienced tutors provide helpful feedback.

## Experienced tutor's tasks prior to class

* Look over the students' bios to know the names of 190J tutors
* List the courses that you would be comfortable observing and providing feedback on
* Take a look at the `resources/_buggycode-peer-review/csXX-NN-NetID` directory in the repo for this website (available via the "GitHub" link at the top of this page) to get an idea of the submitted problems.

## Getting set up (5 minutes)

* Introductions
  * 190J students should change their display name to include the course they are tutoring for, e.g., `CS 8 - Prof. K (she/her)`
* Form pairs
* One experienced tutor leads one or more pairs in the breakout rooms

## About the activity (5 to 10 minutes per student, 40 minutes total)

* One person assumes the role of a *"student"*, another that of a *"tutor"*. The others including the lead tutors are observers.
* The *"student"* should start by picking one of the problems in the git-repo (choose an example problem in one of the directories). Don't pick a problem that ends with the *"tutor"*'s name because they have contributed that problem, so they already know the bug. The **student** may choose a problem that they contributed or go with one of the others.
* The "student" should ask the "tutor" a question related to the code (see the README.txt for suggestions to get started). The tutor should appropriately engage with the student to help them solve the problem.
* Each interaction should nominally take 5-10 minutes. If the interaction ends in less than 5 minutes, the student should proceed to ask a second question.
* Complete the relections and feedback described below. 
* Switch roles and repeat.

### Reflections and feedback (5-10 minutes per student, 20 minutes total)

* After each tutoring session, all the observers (including the lead tutor) should fill this form about the interaction [peer-review observation form](http://bit.ly/Peer-observation-form).

* The student who assumed the role of a "tutor" should fill this reflection form: [190J-tutor reflection form](http://bit.ly/190J-tutor-reflection-form).

* The lead tutors go over the feedback in the observation form and summarize the feedback for the tutor.

If time permits, the lead tutors will discuss and summarize the main take-aways from their observations and feedback.


-----


If you would like us to add or correct anything, feel free to [edit this guide on GitHub](https://github.com/ucsb-teaching-cs/w21/edit/master/resources/buggycode.md) and submit a Pull Request from your forked repo.

---------

**Acknowledgement / Contact Me**

If you have any questions or suggestions, don't hesitate to reach out to me via ykk@ucsb edu (remember to replace a space with a `.` between the `ucsb` and `edu`).

For attribution, please keep the reference to the author:

> These materials are released under the CC BY 4.0 by Yekaterina Kharitonova.

------

Page last updated: Feb 2021

