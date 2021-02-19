---
layout: default
title: Practice with git/GitHub
parent: Resources
nav_order: 2
---

# Adding your bio / Practice with git/GitHub

{: .no_toc }

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}



In this exercise, we'll practice working with git/GitHub to add and modify files.

In this assignment we ask you submit a recent photo and bio to share with our students. The idea is to help them get to know you better.

---

## Version Control

First, a bit of background.

git and GitHub are two of the currently popular tools to keep track of the changes in text-based files.

### What's the difference between git and GitHub?
A lot of times you'll hear people use these terms interchangeably but that's not entirely correct.

**git** runs locally on your computer and keeps track of the changes that you make to the files on your machine.
You won't be able to share these changes with your teammates using git alone, and that's where GitHub comes in.

**GitHub** is a web service, a "cloud" platform that hosts your projects in repositories and allows you to share your repos with the world.
There are alternative solutions to GitHub, such as GitLab and BitBucket, but they are all designed to let you `push` your local changes to the cloud to enable backup, sharing, and collaboration.

### Basic git/GitHub references and tutorials

Here's a **GitHub Basics Tutorial - How to Use GitHub** <https://youtube.com/watch?v=x0EYpi38Yp4> to get you started.

You might also find it useful to look over the [Git Tutorial: Get Started with Version Control](https://www.taniarascia.com/getting-started-with-git) 
and [Command Line Tutorial: Usage in Linux and macOS](https://www.taniarascia.com/how-to-use-the-command-line-for-apple-macos-and-linux/) by Tania Rascia.

These visual guides might also be helpful in exposing what's going on behind each `git` command you run:
* A Grip On Git (A Simple, Visual Git Tutorial) <https://agripongit.vincenttunru.com>
* Version Control with Git <https://zuckermanbrain.github.io/git-novice>
* A Visual Git Reference <https://marklodato.github.io/visual-git-guide/index-en.html>

------
------
------

## Hands-on with GitHub

To really see the power of GitHub, you need to work with a team. So, let's get started!

We will use this course's repository in order for you to practice the open-source model of collaborating on a `PROJECT_REPO`. 
In the open-source model, there is one or more owner and maintainer of the project repository.
Typically, you as a contributor do not have a direct access to making changes to the repo -- the way you contribute is by submitting your suggestions/modifications via **Pull Requests**.

In this example, we will be referring to this course's website as the `PROJECT_REPO`. 

Use the **GitHub** link in the upper-right corner of this page to navigate to this website's repo.

### Fork the repo

**Fork** the `PROJECT_REPO` using the GitHub interface. 
You can get the `PROJECT_REPO` URL/address by clicking on the green "Code" button on the GitHub's website (you'll likely only need the https URL).

Note that **the _forked_ repo will produce a different URL** (i.e., web address) for each person who forked this repo. We will refer to it as a `PROJECT_REPO_FORK`.

---

At this point, you have two alternative routes that you can take:
* you can continue adding the files using the GitHub web interface
* you can continue adding the files using `git` and the command line

You will need to make the changes to **your fork** using _one_ of the above options. 
Then, when you have your picture and bio uploaded, you will need to **submit a Pull Request** (PR) via the GitHub web interface.

---

### Add your files using the GitHub interface

In this assignment we ask you submit a recent photo and bio to share with our students. The idea is to help them get to know you better.

* In the browser, open up the `PROJECT_REPO_FORK`.


* Navigate to the `assets/images` folder and select "Upload files" from the "Add file" dropdown. 
	* Use an image that shows your face and helps students recognize you.
	* Use a **square** PNG image (300x300 px max resolution).
	* Use the naming convention `XX-YY-FirstName-LastInitial.png`, where `XX` is the course number that you are tutoring for (one of `CS08`, `CS09`,  `CS16`, `CS24`, `CS32`, `CS64`, `CS90DA`,  `CS130`, `CS130B`, `CS148`, `CS156`) and `YY` is this quarter (e.g., `W21`, `S21`)

* After uploading your image, remember to "Commit changes".
	* Save the filename for the image that you uploaded.

Now, navigate to the `_staffers` folder. 

* Select "Create new file" from the "Add file" dropdown. 
* Name your file `Your_NETID.md` making sure to substitute _your NETID_ before the `.md` part.
* Copy the following template and update the fields accordingly.
	* Leave the opening and closing dashes intact.
	* Update your `name`
	* Leave the `role` as ULA
	* Update the `pronouns` to only include yours
	* Use the base filename (not the path) for the `photo` that you uploaded
	* Add your bio

```
---
name: Your Name
role: Undergraduate Learning Assistant
pronouns: She/her Him/his They/their
photo: image.png
---

Write your bio and a welcome message (300 to 400 words).
```

* Remember to "Commit changes".

---




### Add your files using the command line


#### Clone the (forked) repo

Now that you have your own fork `PROJECT_REPO_FORK` (i.e., copy of the `PROJECT_REPO`), which is connected to the main `PROJECT_REPO`, it's time to **clone** the fork to your local computer.

You can get the `PROJECT_REPO_FORK` URL/address by clicking on the green "Code" button on the GitHub's website. 

> To quickly check that you are cloning the correct repo (i.e., the fork, not the main project), look at the name of the repo in the top left portion of the website: it should show `YOUR_GITHUB_USERNAME / PROJECT_REPO` and underneath it should say **"forked from"** and link to the main `PROJECT_REPO` address.

To clone  `PROJECT_REPO_FORK` to your computer, open a Terminal window and type:
```
git clone PROJECT_REPO_FORK
```

**Note**: if you type `pwd` (i.e., _print working directory_) it will produce a path to the folder on your computer which now contains a cloned version of your forked repo (`PROJECT_REPO_FORK`). 

You can verify that the new repo is there by running `ls -l` (Note: _these are not ones (1) but "ells" (lowercase Ls)_). Once you run the `ls` command you should see your `PROJECT_REPO_FORK` folder on the list.

Congrats! You can now switch to that folder by typing
```
cd PROJECT_REPO_FORK
```

If you run `ls` you should see the README.md and other files in this repo.

Woohooo! We are done with the setup and are ready to start working with the files.

---

At this point, check the instructions and requirements above for uploading your picture and the bio. 
Since you are working on the command line you'll need to add
* your picture to the `assets/images` folder
* your bio to the `_staffers` folder


#### Add the files to your fork

* Verify that your changes are detected by running `git status`. It tells you which files you have modified. 
* If the file that you created is "red" in the "Untracked files" category, make git aware that it needs to keep track of it: Add the changes by running `git add .gitignore`
* See the difference by running `git status` and make sure that only the files you intended to change are “green”.
* Commit your changes `git commit -m "Added a profile picture and the bio."`
* Make your change show up on your fork's github repo website by pushing this commit to the repo using `git push` (note: not including `origin <branchname>` after `git push` defaults to `origin master`).

This commit and the correspending files now live in _your fork_ and not in the main `PROJECT_REPO`. 

When you are ready for your changes/files to show up on the main website, submit a PR.

---

# Submit a Pull Request (PR)

In order for your changes to be added to the main `PROJECT_REPO`, you need to issue a **Pull Request** (usually abbreviated as PR).

Pull Requests (PRs) are typically issued through the GitHub web interface. 

To submit a PR go to the `PROJECT_FORK_REPO` page on GitHub. Click on the "Pull Requests" **tab** and click on the green "New Pull Request" button.

**Important**: make sure to select the "`compare across forks`" link and then set the `base` and `head` repositories and branches accordingly.

Fill out the necessary information and then to finalize your PR, click on the green "Create Pull Request".

-----


If you would like us to add or correct anything, feel free to [edit this guide on GitHub](https://github.com/ucsb-teaching-cs/w21/edit/master/resources/adding_bio.md) and submit a Pull Request from your forked repo.

---------

# Acknowledgement / Contact Me

If you have any questions or suggestions, don't hesitate to reach out to me via ykk@ucsb edu (remember to replace a space with a `.` between the `ucsb` and `edu`).

For attribution, please keep the reference to the author:

> These materials are released under the CC BY 4.0 by Yekaterina Kharitonova.

------

Page last updated: Feb 2021

