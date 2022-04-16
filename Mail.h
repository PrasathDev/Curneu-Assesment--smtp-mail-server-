	FILE* gmailur;
	FILE* mail;
	FILE* message;
	FILE* passur;
	FILE* subject;
	FILE* mailaysoat;
void Initialize(void)
{
	gmailur = fopen("GmailUR.txt","w");
	mail =fopen("Mail.txt","w");
	message =fopen("Message.txt","w");
	passur =fopen("PassUR.txt","w");
	subject =fopen("Subject.txt","w");	
	mailaysoat=fopen("Mail.aysoat","w");
	printf("\n\nInitiating please wait\n");
	fprintf(mailaysoat,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody = ''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, smessage)\nprint('Done')\n\n");
	fclose(mailaysoat);
	return;
}
void fillData(void)
{
	Initialize();
	char GMAILID[256], PASSWORD[256], SUBJECT[256], SENDMAIL[256], MESSAGE[256];
	printf("Hello, Here We'll Fill The Data!");
	printf("\n\nEnter Your Gmail ID \nGmail:> ");
	scanf("%s",&GMAILID);
	fprintf(gmailur,"%s",GMAILID);
	printf("\n\nEnter your password (%s)\nPassowrd:> ",GMAILID);
	scanf("%s",&PASSWORD);
	fprintf(passur,"%s",PASSWORD);
	printf("\n\nPress Enter To Continue\n");
	getch();
	system("CLS");
	printf(" we are filling information that can be changed many a times!!\n\n");
	system("COLOR 0c");
	printf("\n\n\aCAUTION: Here only one word input is accepted,\nIf you want a sentence then goto your project's folder\nand make changes in files.\n(Files that can be changed are: Subject.txt, Message.txt and Mail.txt)\n\nPress Enter To Continue\n\n");
	getch();
	system("CLS");	
	printf("Please enter the sender's Mail-ID (Only one word is accepted, Else this will crash!)\nMail:> ");
	scanf("%s",&SENDMAIL);
	fprintf(mail,"%s",SENDMAIL);
	printf("Please enter the subject for mail (Only one word is accepted, Else this will crash!)\nSubject:> ");
	scanf("%s",&SUBJECT);
	fprintf(subject,"%s",SUBJECT);
	printf("Please enter the Message for mail (Only one word is accepted, Else this will crash!)\nMessage:> ");
	scanf("%s",&MESSAGE);
	fprintf(message,"%s",MESSAGE);
	system("CLS");
	printf("Okay, we are all set!\nPress any key to close me.\n");
	getch();
	printf("\a");
	fclose(gmailur);
	fclose(mail);
	fclose(message);
	fclose(passur);
	fclose(subject);
	exit(0);
}
int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}
