---
layout: default
title: ULAs in CS (Part 2)
parent: Resources
---

# ULAs in CS: Research Paper Analysis
{: .no_toc }

## Table of contents
{: .no_toc .text-delta }

1. TOC
{:toc}


## Assignment 

For this assignment, we ask that you analyze a paper from the list of citations in the work by Mirza et al. (2019) 
and then compare it to another paper that cited the work that you selected.

The goals of this assignment are:
* Identify the main takeways of two research papers
* Critically evaluate the methodology of a research paper
* Reflect on our current ULA program
* Practice writing in LaTeX (optional but highly recommended)

### Select and claim a citation (paper1)

For this assignment, we ask that you select one of the papers from the list of citations from the following paper:

* Diba Mirza, Phillip T. Conrad, Christian Lloyd, Ziad Matni, and Arthur Gatin. 2019. _Undergraduate Teaching Assistants in Computer Science: A Systematic Literature Review._ In Proceedings of the 2019 ACM Conference on International Computing Education Research (ICER '19). Association for Computing Machinery, New York, NY, USA, 31–40. <https://doi.org/10.1145/3291279.3339422> ([PDF](https://ucsb-teaching-cs.github.io/f20/hwk/h01/mirza-ula-lit-review.pdf))

**Sign up** to analyze a paper that hasn't yet been claimed [on this spreadsheet](https://docs.google.com/spreadsheets/d/1ghLKE8T76MW2smI0ll_A7UJ-AGy1Hwril-faFnmwFJk/edit?usp=sharing):
 add the citation number (from the above paper), the title and the year of the paper that you claimed.
 Once you find the paper online, include its URL as well.

 You may need to go to the following sites to get the URL:
* ACM Digital Library <https://dl.acm.org>
* IEEE Xplore <https://ieeexplore.ieee.org/Xplore/home.jsp>

To get access without having to pay for articles, use the UCSB VPN:
* <https://www.it.ucsb.edu/network-infrastructure-services/pulse-secure-campus-vpn>


### Write an essay (Part 1)

 Write a short essay that weaves in the answers to the following questions:

* What is the research question that the paper is investigating?
* What are the key findings of the paper?
* How did the researchers measure these outcomes? (If they didn't adequately measure, and only described in general terms their anecdotal experiences, note this.)
* How do you think we can apply this research to the course you are tutoring, or more generally, in our undergraduate program at UCSB?

### Select a new paper (paper2) that cited the work that you analyzed (paper1) 

 There are multiple ways to find which papers cited a specific paper. 
 * If you follow the `doi` link that we included above, in the paper citation, you'll see two blue quotation marks with a number next to them: that's how many papers cited this paper. If you click on the "Bibliometrics and Citations" button (the squiggly up arrow) on the vertical menu to the right of the Abstract, the "Citations" tab will tell you which papers cited it.
 * Alternatively, if you search for the title of the paper on <https://scholar.google.com>, then underneath the excerpt from the abstract you'll see the two quotes with "Cited by" and the count next to it. If you click on it, you'll be redirected to the page that lists the papers that cited your paper (that's now shown as a link at the top of the page).

### Augment your analysis (Part 2)

In your essay, apply the questions from Part 1 to your `paper2`. 

Additionally, explain in what context was `paper1` cited in `paper2`.
How similar are their research questions? Where and how do they differ?

---

# Writing guidelines

This is a writing assignment, so we emphasize on producing a coherent and well structured piece. Below are some guidelines on what I am looking for in your essay:

* Clearly identify the main findings
  - There is a lot of information in a research paper. In conveying your finding you will need to distill the main takeaways of the paper.
  - Figure out what is new and interesting about the work.

* Describe the findings and methodology at the right level of abstraction
  - We have not specified "how many pages" or "how many words", because we don't want you to aim for that.   
  - Write just enough to answer the questions below, and no more.   If that's 1 page, fine.  If it's three pages fine.   Make it as short as possible, and no shorter. Less than one page is probably too short and up to five pages.

* Make clear arguments
   - Connect the research finding with an actual practice that we are doing in our program
   - Provide supporting data from the paper when critiquing results

* Be original
   - Organize your essay in whatever way you like (except not by simply repeating the questions and answering each one in a paragraph; make it a coherent essay.)
   - Don't just copy/paste from the paper or the abstract.  Where you use exact wording, be sure to use "quotation marks", but do this sparingly, only where using the exact wording of the original source is really necessary to convey the idea.
   - Summarize and critically reflect on the results of the paper.
   - Include personal accounts and reflection where appropriate.

* Make it engaging
   - As a tutor you have the opportunity to really engage students. Doing so requires a willingness on your part to be engaging. Try to bring it into your writing.


# Submission instructions
   
* Type out your essay.
  - We recommend using the following template on Overleaf
  - You'll need to create an account if you don't already have one.
  - If you don't end up using Overleaf, make sure that you properly cite both papers in your essay.

* Insert your paper1 and paper2 as an appendix at the end of your essay.
  - Upload the PDF of papers to your Overleaf account
  - Use the `pdfpages` package: At the top of the LaTex file (after the `\documentclass`) add `\usepackage{pdfpages}`
  - To include all the pages in the PDF file: `\includepdf[pages=-]{myfile.pdf}` replacing `myfile.pdf` with the name of the PDF that you uploaded.

* Save your essay as a PDF.

* Upload it to Gradescrope to H02.


