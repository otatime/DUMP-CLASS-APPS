//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerComponent.h"

@class IOSObjectArray, NSString;

@interface DaggerComponent : NSObject <DaggerComponent>
{
    IOSObjectArray *modules_;
    IOSObjectArray *dependencies_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (id)dependenciesDefault;
+ (id)modulesDefault;
@property(readonly) IOSObjectArray *dependencies; // @synthesize dependencies=dependencies_;
@property(readonly) IOSObjectArray *modules; // @synthesize modules=modules_;
@property(readonly, copy) NSString *description;
- (id)annotationType;
- (id)initWithDependencies:(id)arg1 withModules:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

