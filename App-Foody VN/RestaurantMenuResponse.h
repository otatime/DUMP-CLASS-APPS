//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class Dish, NSMutableArray, RestaurantMenuGroup;

@interface RestaurantMenuResponse : CloudResponse
{
    NSMutableArray *currentMenuGroupList;
    RestaurantMenuGroup *currentMenuGroup;
    NSMutableArray *currentMenuDishes;
    Dish *currentDish;
}

@property(retain, nonatomic) Dish *currentDish; // @synthesize currentDish;
@property(retain, nonatomic) NSMutableArray *currentMenuDishes; // @synthesize currentMenuDishes;
@property(retain, nonatomic) RestaurantMenuGroup *currentMenuGroup; // @synthesize currentMenuGroup;
@property(retain, nonatomic) NSMutableArray *currentMenuGroupList; // @synthesize currentMenuGroupList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedMenuGroupList;
- (id)init;

@end

