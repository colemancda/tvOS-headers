//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSArray, NSDate, NSString, NSURL, STContactAddress;

@interface STSiriMessage : STSiriModelObject
{
    _Bool _outbound;
    STContactAddress *_senderAddress;
    NSArray *_recipientAddresses;
    NSString *_subjectText;
    NSString *_bodyText;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_aceContextObjectValue;
- (void)setChatIdentifier:(id)arg1;
- (id)chatIdentifier;
- (void)setSendDate:(id)arg1;
- (id)sendDate;
- (void)setAttachmentURL:(id)arg1;
- (id)attachmentURL;
- (void)setBodyText:(id)arg1;
- (id)bodyText;
- (void)setSubjectText:(id)arg1;
- (id)subjectText;
- (void)setRecipientAddresses:(id)arg1;
- (id)recipientAddresses;
- (void)setSenderAddress:(id)arg1;
- (id)senderAddress;
- (void)setOutbound:(_Bool)arg1;
- (_Bool)isOutbound;
- (id)init;

@end

