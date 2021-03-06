//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSDictionary, NSURL;

@interface MPStorePlayWhileDownloadSession : NSObject <NSCopying>
{
    NSURL *_destinationURL;
    unsigned long long _downloadToken;
    NSDictionary *_purchaseBundle;
    NSURL *_sourceURL;
}

@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSDictionary *purchaseBundle; // @synthesize purchaseBundle=_purchaseBundle;
@property(nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

