/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "PhoneTabViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PhoneViewController : XXUnknownSuperclass <PhoneTabViewController> {
}
+(BOOL)tabBarIconImageFinished:(id*)finished selectedImage:(id*)image forTabBarItemName:(id)tabBarItemName;
+(void)cacheFinishedTabBarIconImage:(id)image finishedSelectedTabBarIconImage:(id)image2 withTabBarItemName:(id)tabBarItemName;
+(id)defaultPNGName;
+(id)tabBarIconName;
+(XXStruct_ndkk2A)badge;
+(int)tabViewType;
+(void)initializeIconAndTitle:(id)title;
-(void)_prepareForLoadView;
-(void)viewWillUnload;
-(void)_loadOffsetDefaultForKey:(id)key withScrollView:(id)scrollView;
-(void)_saveOffsetDefaultForKey:(id)key withScrollView:(id)scrollView;
-(void)savePreferences;
-(void)handleURL:(id)url;
-(void)prepareForSnapshot;
-(BOOL)shouldSnapshot;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)init;
@end

