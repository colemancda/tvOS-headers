//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSString;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation
{
    NSString *_itemIdentifier;
    CDUnknownBlockType _responseBlock;
}

- (void).cxx_destruct;
- (id)_requestBodyData;
- (void)main;
@property(copy) CDUnknownBlockType responseBlock;
@property(copy) NSString *itemIdentifier;

@end

