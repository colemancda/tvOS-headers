//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLConstantValueIntermediate : NSSQLIntermediate
{
    unsigned int _type;
    id _constantValue;
}

- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (unsigned int)sqlTypeForProperty:(id)arg1;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (_Bool)_addBindVarForConstId:(id)arg1 ofType:(unsigned int)arg2 inContext:(id)arg3;
- (void)dealloc;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3;
- (id)initWithConstantValue:(id)arg1 ofType:(unsigned int)arg2 inScope:(id)arg3 context:(id)arg4;

@end

