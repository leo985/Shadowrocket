//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface REValidator : NSObject
{
    NSDictionary *_parameters;
    CDUnknownBlockType _inlineValidation;
}

+ (id)parseParameterString:(id)arg1;
+ (id)validateObject:(id)arg1 variableName:(id)arg2 validation:(CDUnknownBlockType)arg3;
+ (id)validateObject:(id)arg1 variableName:(id)arg2 parameters:(id)arg3;
+ (id)name;
+ (id)validatorWithInlineValidation:(CDUnknownBlockType)arg1;
+ (id)validatorWithParameters:(id)arg1;
+ (id)validator;
@property(copy, nonatomic) CDUnknownBlockType inlineValidation; // @synthesize inlineValidation=_inlineValidation;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;

@end

