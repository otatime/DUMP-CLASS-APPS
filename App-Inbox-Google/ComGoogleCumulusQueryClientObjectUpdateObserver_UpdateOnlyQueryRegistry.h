//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusQueryClientObjectUpdateObserver_UpdateOnlyQueryRegistry : NSObject
{
    id <JavaUtilMap> updateOnlyQueries_;
}

- (void)dealloc;
- (id)init;
- (id)getQueries;
- (int)size;
- (id)getQueryWithNSString:(id)arg1;
- (BOOL)hasQueryWithNSString:(id)arg1;
- (void)deleteQueryWithNSString:(id)arg1;
- (void)addQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1;

@end
