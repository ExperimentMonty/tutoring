Monica
======
Monica is a freshman CS major.  We've started off with me helping her with her project in C++

Session 1
----------
* We went over the basics of object-oriented programming
* Discussed the proper usage of header files in doing OOP
* We went over the structure of her project
* We went over the existing code for the Time object
* We created the function declarations for the Date object
* We implemented the Date object
* We created a main function to test that the Date object worked right
* We talked about what we'd need to do for the MArecord class
* We decided she would clean up and comment the code we made already, implement the MArecord class, and we'd meet the next day to go over what she did and make the MAlog class and the real main function

Session 2
----------
* We started off by writing some stuff in her main function to test if what we did yesterday worked.  Apparently we didn't do everything right, so we worked through the errors.
* We fixed the comparison functions of Date (they weren't supposed to be const)
* We wrote the input and output operators for MArecord
* We wrote everything for MAlog, and I think we have everything done for the input function using the stringstream library.
* Tomorrow, we need to test that MAlog is working correctly, and we need to finish writing out the main function.  Then I'll give her code a once-over to see if there's any glaring holes we missed according to the teacher's rubric.

Session 3
----------
* I'll start off by asking her to explain where we left off yesterday, to make sure she understands it.
** She understood it well. 
* We had some difficulties with getting istream operators passed around for some reason.
** It would have been helpful if the teacher had made clear how he wanted his classes to be layed out.  It wasn't clear if the log class should be given a string, or an istream object as an initializer

Session 4
---------
* Monica needs help with her second project.  It's kind of a continuation of the previous project, but with subclasses as well as classes, basically.
* For this session, she just wanted to go over the basic ideas of the project, and then go over, in a high-level way, what it is she'll need to make for this project.  I think this is very smart, and I need to remember to try to do this more in the future.  This gives us a chance to talk over what it is that needs to be done, but give her all the time to figure out how to do it, as opposed to me telling her "Oh, you should implement this now" or "Oh, that error means that this went wrong."  Her finding that out on her own is MUCH better.
* She'll be implementing as much as she can, and then we'll be meeting up tomorrow for whatever she had trouble with.

Session 5
---------
* We started off this session going over what Monica had already implemented, and she explained what she had trouble with while implementing it.
** She had trouble implementing the overloaded = operator, and the destructors.
* When she tried to compile her code, a bunch of problems showed up, mostly relating to pointers.
** I explained to her to not feel too bad, that pointers are one of the hardest things to handle right in CS, right up there with recursion.
* We fixed all of the errors, then we implemented the loading functions one by one and testing to see if they were working correctly by hardcoding in the paths to the text files.
* Once we finished verifying that all of those functions were implemented correctly, we re-worked our hardcoded main function to accept command line arguments, and to error check the command line arguments as well.
* The only things we didn't get done was outputting a few sample records (although all she needs to do is take the single outputs we did and put them into loops), and we might not have the destructors made right (but she'll be asking about this at her office hours).

Session 6 - 2.5 hours
---------
* This session was to work on her third project in this course.  It was basically to add a templated linked list to the previous project.
* I had to relearn how to use templated classes in C++.  I seem to be relearning a lot of things while doing this tutoring stuff, which is pretty awesome.
* We had a problem where we pretty much just stared at the screen for ten minutes.  I really hope it was somehow an education in the debugging process for Monica.  Eventually we discovered that we had forgotten to mark a variable as being a pointer in a class constructor.
** Always look further into the error code if the error spawned from a chain of problems!
* We also added in exception handling for all of the C++ new calls.
** I discovered that they don't do the NULL pointer thing like C, they throw a bad_alloc exception, or something like that.
* We also added exception handling for bounds checking, which is awesome, because those exceptions were being handled already by the outer program.
** But I do need to remind Monica to catch the exceptions in her at function and her [] operator. 
*** Sent her the email giving her advice about that.
