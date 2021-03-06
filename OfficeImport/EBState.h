//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EDResources, EDWorkbook, TCTracing;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    struct XlLinkTable *mXlLinkTable;
    struct XlNameTable *mXlNameTable;
    ChVector_be6372b9 *mSheetNames;
    struct XlFormulaProcessor *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
    TCTracing *mTracing;
}

@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
- (id)tracing;
- (_Bool)isCancelled;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (ChVector_be6372b9 *)sheetNames;
- (struct XlNameTable *)xlNameTable;
- (struct XlLinkTable *)xlLinkTable;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end

