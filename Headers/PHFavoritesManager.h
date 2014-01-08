/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PHFavoritesManager : XXUnknownSuperclass {
}
+(BOOL)dialFavoriteEntry:(id)entry;
+(void)recacheIdentitiesSoon;
+(void)save;
+(id)starkFavorites;
+(id)currentFavorites;
+(id)_favoritesWithPredicate:(id)predicate;
+(id)allFavorites;
+(id)predicateForFaceTimeEntries;
+(id)predicateForFaceTimeAudioEntries;
+(id)predicateForTelephonyEntries;
+(void)_phoneApplicationAddressBookChangedNotification:(id)notification;
+(void)_ftcServiceAvailabilityDidChangeNotification:(id)_ftcServiceAvailability;
+(void)_abfavoritesListChangedNotification:(id)notification;
+(void)_abFavoritesEntryChangedNotification:(id)notification;
+(void)_clearCachedFavorites;
+(void)initialize;
@end

