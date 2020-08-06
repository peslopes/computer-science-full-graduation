function filtro_media()
%filtro passa baixas, media

im_in  = double(imread('patterns.jpg'));

[ rows, cols ] = size ( im_in );

mask = [ 1 1 1; 1 1 1; 1 1 1 ];
mask = mask ./ 9;

im_out = zeros( rows, cols );

for i = 2:rows-1,
   for j = 2:cols-1,
      for l=-1:1,
         for m=-1:1,
            im_out( i, j ) = im_out( i, j ) + im_in( i + l, j + m ) .* mask( l + 2, m + 2 );
         end
      end
   end
end   

%---------------------------------------------------------------------
%show imagens


subplot( 1, 2, 1 ); imshow( im2uint8( mat2gray( im_in  ) ) );
subplot( 1, 2, 2 ); imshow( im2uint8( mat2gray( im_out ) ) );
%---------------------------------------------------------------------





