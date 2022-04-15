#include "email.h"

Email::Email()
{
}

Email::Email(EmailAddress credentials, EmailAddress from, EmailAddress to, QString subject, QString body)
{
    credentials_ = credentials;
    from_ = from;
    to_ = to;
    subject_ = subject;
    body_= body;
}

EmailAddress Email::credentials() const
{
    return credentials_;
}

void Email::setCredentials(const EmailAddress &credentials)
{
    credentials_ = credentials;
}

EmailAddress Email::from() const
{
    return from_;
}

void Email::setFrom(const EmailAddress &from)
{
    from_ = from;
}

EmailAddress Email::to() const
{
    return to_;
}

void Email::setTo(const EmailAddress &to)
{
    to_ = to;
}

QString Email::subject() const
{
    return subject_;
}

void Email::setSubject(const QString &subject)
{
    subject_ = subject;
}

QString Email::body() const
{
    return body_;
}

void Email::setBody(const QString &body)
{
    body_ = body;
}
