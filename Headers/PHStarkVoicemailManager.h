/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PHStarkVoicemailManager : XXUnknownSuperclass {
}
+(BOOL)isVisualVoicemailAvailable;
+(id)sharedVoicemailManager;
-(id)badgeString;
-(id)voicemailWithID:(long long)anId;
-(id)trashedVoicemails;
-(id)voicemails;
-(void)voicemailStoreContentsRemovedNotification:(id)notification;
-(void)voicemailFlagsChangedNotification:(id)notification;
-(void)onlineStateChangedNotification:(id)notification;
-(void)voicemailsAddedNotification:(id)notification;
-(void)dealloc;
-(id)init;
@end
