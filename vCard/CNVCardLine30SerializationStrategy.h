//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl
{
    unsigned long long _startingLineLength;
}

- (void)serializeVersionPlaceholder;
- (id)detectedTypeOfData:(id)arg1;
- (void)_addAutomagicParametersForData:(id)arg1;
- (void)serializeData:(id)arg1;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeString:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeParameters:(id)arg1;
- (void)serializeGroupingName:(id)arg1;
- (void)willSerializeValue;

@end
