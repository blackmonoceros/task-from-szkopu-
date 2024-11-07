# task-from-"szkopul"

Bar Apis
Memory limit: 64 MB
Ms. Irena works at the Apis bar. Her job is to manage plates. There are two types of plates in the bar: deep and shallow. Additionally, 
in order to control Mrs. Irena's work, there is a unique identification number on each plate. Mrs. Irena can perform two activities:

Issuing a plate. Mrs. Irena reaches for one of two stacks: a stack of deep plates or a stack of shallow plates and gives the interested 
person the plate on top of this stack. While performing this activity, Mrs. Irena says the word please out loud.

Accepting a plate. Mrs. Irena receives a plate and places it on top of the appropriate stack. While performing this activity, she says 
the word thank you out loud.
Additionally, each time a plate is issued, Mr. Andrzej writes down the identification number of the plate being issued in his notebook.

Unfortunately, Mr. Andrzej has lost his notebook and is afraid of being fired because of it. Help Mr. Andrzej recreate the notes in the notebook.

Input
The first line of input contains a number indicating the number of words spoken by Mrs. Irena during work. Each of the following lines contains 
a word spoken by Mrs. Irena (please or thank you), the type of plate being accepted or given (deep or shallow), and, if this entry indicates 
the acceptance of a plate, the identification number of the plate being accepted.

Output
The following lines of output should contain subsequent entries from Mr. Andrzej's notebook - the numbers of subsequent plates given 
by Mrs. Irena.

Example
For the input data:

8
thank you shallow 1
thank you deep 15
thank you shallow 2
please shallow
thank you shallow 3
please deep
please shallow
please shallow
the correct answer is:

2
15
3
1
