#ifndef EMAIL_H
#define EMAIL_H

#include "emailaddress.h"

 
class Email
{
public:
    Email();

    Email(EmailAddress credentials,
          EmailAddress from,
          EmailAddress to,
          QString subject,
          QString body);

    EmailAddress credentials() const;
    void setCredentials(const EmailAddress &credentials);

    EmailAddress from() const;
    void setFrom(const EmailAddress &from);

    EmailAddress to() const;
    void setTo(const EmailAddress &to);

    QString subject() const;
    void setSubject(const QString &subject);

    QString body() const;
    void setBody(const QString &body);

private:
    QString body_;
    QString subject_;

    EmailAddress credentials_;
    EmailAddress from_;
    EmailAddress to_;
};

#endif // EMAIL_H
